#include <iostream>
#include <string>
#include <map>
#include <vector>

struct data {
	data() {}
	data(int val) { min = max = val; average = val; }

	void add_data(int val) {
		count++;

		if (min > val) { min = val; }
		else if (max < val) { max = val; }

		average = average + val / 2;
	}

	int count = 1;
	
	int min;
	int max;

	float average;
};

int main() {
	std::string test_input;

	// std::map<std::string, int> m;
	std::map<std::string, data> m;

	std::string string_key;
	std::string string_value;

	bool is_key = true;
	bool skipping_spaces = false;

	std::cout << "enter: ";
	std::getline(std::cin, test_input);

	for (auto i = test_input.begin(); i != test_input.end(); i++) {
		if (isspace(*i) || i+1 == test_input.end()) {
			while (isspace(*i++));
			if (is_key == false) {
				string_value.push_back(*i);

				if (m.find(string_key) == m.end()) {
					// m.insert(std::pair<std::string, int>(string_key, stoi(string_value)));
					data d(stoi(string_value));
					m.emplace(string_key, d);
				}
				else {
					// m[string_key] += stoi(string_value);
					m[string_key].add_data(std::stoi(string_value));
				}

				string_key.clear();
				string_value.clear();
			}
			is_key = !is_key;
			continue;
		}

		if (is_key == true) string_key.push_back(*i);
		else string_value.push_back(*i);
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		std::cout << it->first
			<< "\n (min: " << it->second.min << ", max: " << it->second.max << ")\n"
			"average: " << it->second.average << std::endl;
	
		std::cout << "\n";
	}

	std::cout << "\n\n";
	system("pause");
	return 0;
}
# exercises_for_programing_in_cpp_2_23
exercise 2.23 from the book Exercises for Programing in C++

Consider a dataset that consists of a sequence of records, where each record consists of the following two fields:
1) a name, which is a string (containing no whitespace characters) and 2) a value, which is a real number.
Records and fields within records are delimited by whitespace. The same name can appear in multiple records.
The number of records in the dataset may be extremely large (e.g., quadrillions of records). Develop a program
that reads the above type of dataset from standard input and writes the following information to standard output:
1) the number of (distinct) names; 2) for each name, the minimum, maximum, and average of the values for all
of the records with that particular name; and 3) the minimum, maximum, and average of the values for all of
the records. (Hint: Use std::map.)

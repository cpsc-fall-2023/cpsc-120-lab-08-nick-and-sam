//Header: nickmontes@csu.fullerton.edu
//@nickmontess
//@SamF213

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  std::vector<double> values;
  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (argc <= 1) {
    std::cout << "error: you must supply at least one number";
  }
  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  for (int i = 1; i < argc; i++) {
    values.push_back(std::stod(arguments[i]));
  }
  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double sum{0};
  for (double element : values) {
    sum += element;
  }
  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  double average = sum / (argc - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}

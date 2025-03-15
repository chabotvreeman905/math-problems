#include <iostream>
#include <cmath>

int main() {
  int n = 10; // number of problems
  int max_value = 50; // maximum value for each problem

  // generate random numbers between 1 and max_value for each problem
  int a[n];
  for (int i = 0; i < n; i++) {
    a[i] = rand() % max_value + 1;
  }

  // print the problems
  for (int i = 0; i < n; i++) {
    std::cout << "Problem " << i+1 << ": " << a[i] << std::endl;
  }

  return 0;
}

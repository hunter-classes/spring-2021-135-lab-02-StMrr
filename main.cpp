#include <iostream>
#include "funcs.h"

int main(){
	// Test Case 1
	std::cout << "int L = 5, int U = 10" << "\n";
	print_interval(5, 10);
	// Test Case 2:
	std::cout << "int L = 29, int U = 43" << "\n";
	print_interval(29, 43);
	// Test Case 3
	std::cout << "int L = 100, int U = 111" << "\n";
	print_interval(100, 111);
	// Test Case 4
	std::cout << "int L = -13, int U = 2" << "\n";
	print_interval(-13, 2);
}
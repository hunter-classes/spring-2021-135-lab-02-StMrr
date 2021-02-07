#include <iostream>

int main(){
	int fib[59];
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i < 60; i++){
		fib[i] = fib[i-1] + fib[i-2];
		/* 
		when the numbers begin to reach two billions, 
		the next number in the array ends up being negative
		despite both the large numbers being positive.
		I believe this is occuring because the program
		cannot handle integers that are greater then a certain
		value, possibly due to them being too large.	
		*/
	}
	for(int i = 0; i < 60; i++){
		std::cout << fib[i] << "\n";
	}
	return 0;
}
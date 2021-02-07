#include <iostream>

int main(){
	int num = 101;
	while(num > 100 or num < 0){
		std::cout << "Enter a number between 0 and 100: ";
		std::cin >> num;
	}if(num <100 && num > 0){
		int i = 1;
		int squared = 1;
		while(i<=2){
			squared *= num;
			i++;
		}
		std::cout << "Number squared is: " << squared << "\n";
	}
	return 0;

}
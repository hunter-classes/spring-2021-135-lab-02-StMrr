#include <iostream>

int main(){
	int i;
	int v;
	int myData[10];
	for(int i =0; i < 10; i++){
		myData[i] = 1;
	}
	do {
		for(int a =0; a < 10; a++){
		std::cout << myData[a] << " ";
	}
		std::cout << "\n";
		std::cout << "Enter i: ";
		std::cin >> i;
		std::cout << "Enter v: ";
		std::cin >> v;
		myData[i] = v;
	}while(i >= 0 && i < 10);
	if(i < 0 or i >= 10){
		std::cout << "Index out range... exiting" << "\n";
	}
	return 0;
}

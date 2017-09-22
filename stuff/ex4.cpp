// Check what happens when the variables given are outside the allowed range

#include <iostream>

int main(){
	//Define a variable and then let it overflow with the next command
	unsigned short int small, overflow;
		small = 20000;
		overflow = small*small;
	std::cout << "Small is " << small << std::endl << "the overflow is " << overflow << std::endl;	
	}

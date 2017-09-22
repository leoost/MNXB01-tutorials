// Determine the size of some data tpyes in the VM

#include <iostream>

int main(){ 
	// Find the size of different data types using the sizeof function
	std::cout << "The size of char is " << sizeof(char) << std::endl;
	std::cout << "The size of int is " << sizeof(int) << std::endl;
	std::cout << "The size of unsigned int is " << sizeof(unsigned int) << std::endl;
	std::cout << "The size of short int is " << sizeof(short int) << std::endl;
	std::cout << "The size of long int is " << sizeof(long int) << std::endl;
	std::cout << "The size of float is " << sizeof(float) << std::endl;
	std::cout << "The size of double is " << sizeof(double) << std::endl;
	std::cout << "The size of long double is " << sizeof(long double) << std::endl;
}

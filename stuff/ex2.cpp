// Trying to do some basic input/output

#include <iostream>


int main(){
	int A,B;
		// This streams the standard input from two variables
		std::cin >> A >> B ;
		//std::cin >> B;
		// Defining two different variables for the sum and product instead of directly printing the functions
		int C;
		C = A + B;
		int D;
		D = A*B;
		//Stream if the standard output with some strings and the results
		std::cout << "The sum of the two is " << C << "\n" << "and the product is " << D; 
		//std::cout << A*B;
	}

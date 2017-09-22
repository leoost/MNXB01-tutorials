// Create a function that compares tha magnitue of two numbers, and call that function in main giving the larger one as the output

#include <iostream>

using namespace std;
//Use the namespace gloablly instead of defining it locally, all functions used will be from this namespace

int comparesize(int first, int second){
	//This function compares the two numbers and gives the larger one as the output
	if(first<second){
		cout<< second;
	}
	if(first>second){
		cout<< first;
	}
	
}
int main(){
	//Main initializes the same variables, and then takes the inputs and executes the previous function
	int first, second;
	cin >> first;
	cin >> second;
	comparesize(first,second);
}
	

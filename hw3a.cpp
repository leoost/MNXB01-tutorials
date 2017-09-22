//This codes a currency exchange function,
//and gives the user the possibility to input their desired exchanged amount of euros into kronor.

#include <iostream>

using namespace std;

float currency_exchange(float eur){
	//This function exchanges euros to kronor, and includes a commission taken from the kronor given out.
	float commission;
	float sek;
	commission=0.05;
	sek=9.519*(0.95)*eur;
	return sek;
}

int main(){
	//The main function gives a dialog before prompting the user to input a euro value that is exchanged to kronor.
	float eur, payment, sek;
	cout << "Hello and welcome to the exchange. Our current exchange rate is 9.519 sek per eur, and the commission is 5%."<<endl;
	cout << "How many euros would you like to exchange?"<<endl;
	cin >> eur;
	sek = currency_exchange(eur);
	payment = 0.05*9.519*eur;
	//This payment is the commission taken from the exchanged money. 
	cout << "You will get back "<< sek <<" sek, out of which "<< payment<< " sek is our commission."<<endl;
}
	

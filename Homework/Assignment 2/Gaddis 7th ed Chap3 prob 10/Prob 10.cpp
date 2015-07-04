/* 
 File:   Prob 10.cpp
 Author: Jonathan Balisky
 Created on July 4, 2015, 10:03 aM
 Purpose:  Converting Celsius to Fahrenheit
 */

//Library iostream
#include <iostream>
using namespace std;

//No Global const

int main(int argc, char** argv) {
	
	// Local variables
	float tmpC; //temperature in Celsius
	float tmpF; //temperature in Fahrenheit
	
	//Asking User for input
	
	cout<<"Please input the the temperature in Celsius and it will be converted";
	cout<<" into Fahrenheit: \n";
	//Input Celsius degrees
	cin>>tmpC;
	
	//Calculation
	tmpF = ((9/5)*tmpC)+32;//Conversion to Fahrenheit
	
	//Output the conversion
	cout<<"The temperature in Fahrenheit is "<<tmpF<<" degrees.\n";
	//end
	
	return 0;
}
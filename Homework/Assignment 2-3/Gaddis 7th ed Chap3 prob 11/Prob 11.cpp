/* 
 File:   Prob 11.cpp
 Author: Jonathan Balisky
 Created on July 4, 2015, 10:53 aM
 Purpose:  Currency exchange
 */

//Library iostream and iomanip for formatting the output
#include <iomanip>
#include <iostream>
using namespace std;

//No Global const

int main(int argc, char** argv ) {
	
	// Local vairbles
	float euroDll = .90f; //Dollar to Euros On GOOGLE.COM
	float yenDll = 122.88f; //Dollar to Yen On GOOGLE.COM
	float dllrAmt; //Amount of dollars the user has
	float cnvtdE; //The dollar amount converted to Euros
	float cnvtdY; //Dollar amount converted to Yen
	
	//Asking for the amount in dollars + Formatting output
	cout<<setprecision(2)<<showpoint<<fixed;
	cout<<"How many dollars do you have? \n";
	cin>>dllrAmt;
	
	//Conversions
	
	cnvtdE = dllrAmt*euroDll;//To Euros
	cnvtdY = dllrAmt*yenDll;//To Yen
	
	//Output results
	cout<<"The amount in euros is "<<cnvtdE<<" and in Yen is "<<cnvtdY<<endl;
	

	//end
	
	return 0;
}
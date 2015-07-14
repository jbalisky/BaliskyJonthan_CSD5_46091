/* 
 File:   Prob 2.cpp
 Author: Jonathan Balisky
 Created on July 3, 2015, 9:03 AM
 Purpose:  Displaying total income of ticket sales
 */

//including iostream +iomanip

#include <iomanip>
#include <iostream>
using namespace std;

//No global varribles. No F desired

int main(int argc, char** argv) {
	
	//Variables
	
	short clssA;//Amount of Seats sold
	short clssB;
	short clssC; 
	float totSld; //Total sold. All ticket prices are whole numbers so 
                            
	// Prompting user for info
	
	cout<<"Hey you! Input the amount of Class A, Class B, then Class C tickets sold.";
	cout<<"\nPress enter after each entry.\n";
	cin>>clssA;
	cin>>clssB;
	cin>>clssC;
	//Calculating total sold
	
	totSld = (clssA*15)+(clssB*12)+(clssC*9);
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"Ugh!!! You only got $"<<totSld<<"? Do better next time!!!";
	
	//end
	
	return 0;
}
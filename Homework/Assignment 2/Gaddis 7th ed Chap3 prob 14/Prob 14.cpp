/* 
 File:   Prob 14.cpp
 Author: Jonathan Balisky
 Created on July 5, 2015, 6:13 PM
 Purpose:  Display Total property tax for senior citizens
 */

//Library iostream and iomanip for formatting the output
#include <iomanip>
#include <iostream>
using namespace std;

//Global const none

int main(int argc, char** argv ) {
	
	// Local variables
	unsigned int lndVle; //Land values
	unsigned int asVle; //Assessment Value 
	float propTax; //Property tax per $100
	float totTax; //Total property tax
	float txPymnt; //Tax payment for seniors
	
	
	//Asking for the amount in dollars + Formatting output
	cout<<setprecision(2)<<showpoint<<fixed;
	cout<<"Please enter the actual value of the land excluding all cents: \n";
	cin>>lndVle;
	cout<<"Please enter the current tax rate in the format 00.00: \n";
	cin>>propTax;

	
	//Calculations
	
	asVle = (lndVle*.6)-5000;//Assessment value is 60%, as well as a -5,000 Discount
	totTax = (asVle/100)*propTax;//Tax to be payed
	txPymnt = totTax/4; //Total tax split into 4 equal payments

	
	//Output results
	cout<<"Including your 5,000 dollar discount your annual tax will be: $"<<totTax<<endl;
	cout<<"This is then split into 4 quarterly  payments of: $"<<txPymnt<<endl;

	//end
	
	return 0;
}
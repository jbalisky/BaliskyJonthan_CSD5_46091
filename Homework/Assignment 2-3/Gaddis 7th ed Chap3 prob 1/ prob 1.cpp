/* 
 File:   Prob 1.cpp
 Author: Jonathan Balisky
 Created on July 2, 2015, 9:43 AM
 Purpose:  Showing how many miles per gallon a car gets
 */

//including only iostream

#include <iostream>
using namespace std;

//No global variables. No F desired

int main(int argc, char** argv) {
	
	// Local variables
	
	short fllTnk; //Place holder for full tank of gas in gallons
	short mles; //Place holder for how many miles on a full tank of gass 
	float mPG; //Place holder for the calculated mile per gallon
	
	//Asking the user to imput the amount of gass the car can hold
	
	cout<<"Please imput the amount of gas your car can hold, in gallons: ";
	cin>>fllTnk;
	cout<<" Thank you! ";
	cout<<"\n Now Please enter how many miles your car can travel on a full tank:";
	cin>>mles;
	mPG = mles/fllTnk; //Calculating the miles per gallon
	cout<<"\nYour car gets "<<mPG<<" miles per gallon!.";//Output the results
	
        //End
	
	return 0;
}
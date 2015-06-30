/* 
  File:  prob 10.cpp
  Author: Jonathan Balisky
  Created on June 29, 2015, 5:00 PM
  Purpose:  Distance per tank of gas
 */

//Library

#include <iostream>
using namespace std;

//No global constants 

int main(int argc, char** argv) {
	
	// Variables
	short fllTnk = 12;
	short mDrvn = 350;
	float mPG;
	
	//Calculations
	
	mPG = mDrvn/fllTnk;
	
	//Outputting the results
	
	cout<<"The car holds "<<fllTnk<<" gallons \n";
	cout<<"This allows the car to travel "<<mDrvn<<" miles. \n";
	cout<<"Giving the car "<< mPG<<" miles per gallon. \n";
	//end
	return 0;
}
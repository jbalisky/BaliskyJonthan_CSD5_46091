/* 
  File:  prob 7.cpp
  Author: Jonathan Balisky
  Created on June 29, 2015, 12:00 pM
  Purpose:  Calc the possible rise in ocean height
 */

//Libraries 

#include <iostream>
using namespace std;

//No global variables needed

int main(int argc, char** argv) {
	
	// Local variables
	float ocnRate = 1.5f; //The rate the ocean is rising per year in millimeters
	float ocnHght; //The height of the ocean after n years
	
	//Calculating the ocean height per line 
	
	ocnHght = ocnRate*5; //Ocen height in 5 years
	
	//Displaying and calculating
	
	cout<< "Below will display the possible raise in ocean height in 5, 7, and 10 years. \n";
	cout<<ocnHght<<"mm in 5 years, \n";
	ocnHght = ocnRate*7;
	cout<<ocnHght<<"mm in 7 years, and finally\n";
	ocnHght = ocnRate*10;
	cout<<ocnHght<<"mm in 10 years.";
	
	 //end
	 
	return 0;
}
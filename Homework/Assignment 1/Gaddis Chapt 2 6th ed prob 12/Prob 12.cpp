/* 
  File:  prob 12.cpp
  Author: Jonathan Balisky
  Created on June 29, 2015, 4:40 pM
  Purpose: Calculating and displaying the area of a tract of land
 */

//Only using one library

#include <iostream>
using namespace std;

//No global variables

int main(int argc, char** argv) {
	
	//Variables
	
	unsigned short convr = 43560; //Conversion from ft to acre
	int lndMs = 389767; //Amount of land owned in ft
	unsigned short lndArc; //Place holder for the land mass in acres
	
	//Calculating the conversion
	
	lndArc = lndMs/convr;
	
	//Displaying the results
	
	cout<<"The area of the land you own will now be displayed in acres: "<<lndMs<<" acres. \n";
	
	return 0;
}
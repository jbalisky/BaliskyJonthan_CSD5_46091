/* 
  File:   Gaddis Chp 2 6th ed prob 5.cpp
  Author: Jonathan Balisky
  Created on June 29, 2015, 10:00 AM
  Purpose:  Calc the average of 5 numbers
 */

//Only need the library iostream

#include <iostream>
using namespace std;

//No Global varribles needed

int main(int argc, char** argv) {
	// The numbers that will be averaged
	//Was originallly going to use the "int" but realized that "short" was a much better use of my memory
	short num1 = 28;
	short num2 = 32;
	short num3 = 37;
	short num4 = 24;
	short num5 = 33;
	short sum; //place holder for the sum
	short avg; //place holder for the average 
	
	//calculations
	sum = num1+num2+num3+num4+num5; //the sum of all 5 numbers
	avg = sum/5; //dividing the sum by five will give the average of the five numbers
	
	//Displaying the results
	
	cout <<"The average of "<<num1<<","<<num2<<","<<num3<<","<<num4<<" and "<<num5<<" is "<<avg<<endl;
	
	return 0;
}
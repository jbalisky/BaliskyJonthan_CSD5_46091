/* 
  File:   prob 6.cpp
  Author: Jonathan Balisky
  Created on June 24, 2015, 5:57 PM
  Purpose:  Calculating annual pay
 */

//Libraries

#include <iostream>
using namespace std;

//No global variables needed

int main() {
	//Local variables

	short payAmnt = 1700;//How much is payed per pay period
	short payPrds = 26;//How many pay periods there are
	unsigned short annlPy;//Place holder for the total annual pay

	annlPy = payAmnt*payPrds; // Calculating the annual pay
	
	//Outputting the results
	
	cout<<"The employee's annual pay is $"<<annlPy<<".\n";
	
	return 0;
}
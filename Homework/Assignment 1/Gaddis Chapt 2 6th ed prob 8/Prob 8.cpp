/* 
  File:  prob 8.cpp
  Author: Jonathan Balisky
  Created on June 29, 2015, 3:00 PM
  Purpose:  Calculate and disply the cost of items
 */

//Using only two libraries   
//iomanip needed for the setprecision 
#include <iomanip>
#include <iostream>
using namespace std;

//No global variables

int main(int argc, char** argv) {
	
	//Local vars
	float itm1 = 12.95f;	//Price of each item
	float itm2 = 24.95f;
	float itm3 = 6.95f;
	float itm4 = 14.95f;
	float itm5 = 3.95f;
	float txPrcnt = .06f;//Sale tax %
	float slsTax; //Total sales tax
	float subTot; //Total with out tax
	float tot; //Total with tax
	
	//Calculations
	
	subTot = itm1+itm2+itm3+itm4+itm5;//Total of items w/o tax
	slsTax = subTot*txPrcnt;//How much the tax is
	tot = slsTax+subTot; //Cost with tax
	
	//Outputing results
	
	cout<<"The price of each item is $"<<itm1<<", $"<<itm2<<", $"<<itm3<<", $";
	cout<<itm4<<", "<<"and $"<<itm5<<endl;
	cout<<"The subtotal is then $"<<subTot<<setprecision(3)<<" plus $"<<slsTax<<" worth of sales tax";
	cout<<" gives the total of $"<<setprecision(4)<<tot<<". \n";
	//end
	return 0;
}
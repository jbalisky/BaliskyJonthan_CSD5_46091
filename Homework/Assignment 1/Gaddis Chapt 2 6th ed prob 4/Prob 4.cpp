/* 
  File:   prob 4.cpp
  Author: Jonathan Balisky
  Created on June 24, 2015, 5:57 PM
  Purpose:  Calculating a total meal cost
 */
 
 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 //No Global Constants 
 
 int main(int argc, char** argv){
 	//My local Variables 
 	float mChrge = 44.50f; //Meal Charge
 	float tax = .0675f; //Sales tax
 	float tip = .15f; //tip percent
 	float txPrcnt; //tax amount
 	float tpAmnt; //tip amount
 	float ttAmnt; //total amount
 	
 	//Calculating 
 	
 	txPrcnt = tax*mChrge;
 	tpAmnt = tip*mChrge;
 	ttAmnt = tpAmnt+txPrcnt+mChrge;
 	//Output results
 	
 	cout<<"The meal cost was $"<<setprecision(4)<<mChrge<<"0.\n";
 	cout<<"The tax amount %"<<txPrcnt<<" and the tip amount would be $"<<setprecision(3)<<tpAmnt<<".\n";
 	cout<<"Add all these together and you get a total of $"<<setprecision(4)<<ttAmnt<<".\n";
 	
 	//end of program
 	
 	return 0;
 }
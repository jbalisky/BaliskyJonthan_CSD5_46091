/*
File: lab3_v2.cpp
Author: Jonathan Balisky
Created on June 25, 2015, 11:48pm
Purpose: To Calc the ridiculous amount of tax on gas
Changes in V2:  prcntTx = (totTax/gallon)*CNVPCT was changed to  prcntTx = (totTax/bseGal)*CNVPCT;
in line 36. The math was not properly calculating the tax percentage
*/

#include <iostream>
using namespace std;

//Global constant because a real life constant is being used

const unsigned char CNVPCT=100;


//Execution of main and only main

int main (int argc, char** argv) {
	
	//Variables used locally 
	
	float fedTax=0.18f; //Taxes pulled of a cali gas pump station
    float slsTax=0.08f;// "  "           "  "
	float calTax=0.36f;// "  "           "  "
 	float gallon=3.69f;// "  "           "  "
 	float bseGal; // Just the price of gas w/o the tax YAY!
	float totTax; // Total tax. boo!
	float prcntTx;// Percent of tax per gallon
	
	//All my calcs in one place
	
	totTax = fedTax+calTax+slsTax; // Total tax calc
    bseGal = gallon-totTax; // Base gallon price calc
    prcntTx = (totTax/bseGal)*CNVPCT; // Percent of tax per gallon clac
    
    //Output the results w/ txt
    
    cout<<"The base price of gas without tax is $"<<bseGal<<" per gallon. \n";
    cout<<"Leading us to the fact that for each gallon we are paying $"<<totTax<<" in taxes. \n";
    cout<<"This is a steep %"<<prcntTx<<" per gallon! \n";
    //end
    return 0;
}
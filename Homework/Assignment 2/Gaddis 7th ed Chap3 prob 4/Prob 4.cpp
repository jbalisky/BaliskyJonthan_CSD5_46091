/* 
 File:   Prob 4.cpp
 Author: Jonathan Balisky
 Created on July 3, 2015, 10:03 AM
 Purpose:  Displaying & calculating the avg of 3 months rain
 */

//including iostream +iomanip

#include <iomanip>
#include <iostream>
using namespace std;

//Global const to change size of char
const int SIZE = 21;

int main(int argc, char** argv) {
	
	//Variables
    char mnth1[SIZE];
    char mnth2[SIZE];
    char mnth3[SIZE];
    float rain1;//Rainfall for 1st month
    float rain2;//Rainfall for 2nd month
    float rain3;//Rainfall for 3rd month
    float rAvg;//Average rainfall
    
    //Formating the output
    cout<<fixed<<showpoint<<setprecision(2);
    //Asking for user input
    cout<<"Enter the 3 names of the months we are averaging.";
    cout<<" Hitting 'enter' between each name.\n";
    cin>>mnth1>>mnth2>>mnth3;
    cout<<"Now enter the rainfall,in inches, first for "<<mnth1<< ", "<<mnth2<<", then ";
    cout<<mnth3<<", hitting enter after each value.\n";
    cin>>rain1>>rain2>>rain3;
    
    //Calculating the average
    rAvg = (rain3+rain2+rain1)/3;
    
     //Outputting the avg       
    cout<<"The average rainfall for "<<mnth1<< ", "<<mnth2<<", and ";
    cout<<mnth3<<", is "<<rAvg<<endl;
    
    //end
    
    return 0;
}

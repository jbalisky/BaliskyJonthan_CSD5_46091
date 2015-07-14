/* 
 File:   Prob 3.cpp
 Author: Jonathan Balisky
 Created on July 3, 2015, 10:03 AM
 Purpose:  Displaying & calculating the avg of 5 test scores
 */

//including iostream +iomanip

#include <iomanip>
#include <iostream>
using namespace std;

//No global variables. No F desired

int main(int argc, char** argv) {
	
	//Variables
    short tScr1;//Test score place holders
    short tScr2;
    short tScr3;
    short tScr4;
    short tScr5;
    float tAvg;//Average of the five
    
    //Formating the output
    cout<<fixed<<showpoint<<setprecision(1);
    //Asking for user imput
    cout<<"Please enter the 5 test scores hitting enter after each test score.\n";
    cin>>tScr1>>tScr2>>tScr3>>tScr4>>tScr5;
    
    //Calculating the average
    tAvg = (tScr1+tScr2+tScr3+tScr4+tScr5)/5;
    
     //Outputting the avg       
    cout<<"The average of the five test scores is %"<<tAvg<<".\n";
    
    //end
    
    return 0;
}

/* 
 File:   Prob 3.cpp
 Author: Jonathan Balisky
 Created on July 3, 2015, 10:03 AM
 Purpose:  Displaying & calculating the avg of 3 months rain
 */

//including iostream +iomanip

#include <iomanip>
#include <iostream>
using namespace std;

//No global variables. No F desired

int main(int argc, char** argv) {
	
	//Variables
    float sptbr;//Rainfall for September
    float nvmbr;//Rainfall for November
    float dcmbr;//Rainfall for December
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

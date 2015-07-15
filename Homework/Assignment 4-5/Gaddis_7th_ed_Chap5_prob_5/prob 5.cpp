/* 
 File:   Prob 5.cpp
 Author: Jonathan Balisky
 Created on July 13, 2015, 6:13 pM
 Purpose:  Displaying acII 0 to 127
 */

//including iostream +iomanip


#include <iostream>
#include <iomanip>

using namespace std;
    
//No global variables. No F desired

int main(int argc, char** argv) {
    
    //Variables 
    float mmCst = 2500; //Cost of membership
    float prcntIn = 1.04; //Percent increase each year 
    
    //Header 
    
    cout<<left<<setw(8)<<"Year"<<left<<setw(10)<<"Price     \n";
    
    //Outputting the raise in ocean level
    
    for (int year = 1; year<=6; year++){
        
        //Calculations 
        mmCst *= prcntIn; //Current price of membership that year
        //Outputting formated results 
        cout<<fixed<<showpoint<<setprecision(2)
        <<left<<setw(8)<<year<<"$"<<left<<setw(3)<<mmCst<<" \n";
    }
    //end
    return 0;
}


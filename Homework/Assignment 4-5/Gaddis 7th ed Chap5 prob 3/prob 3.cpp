/* 
 File:   Prob 3.cpp
 Author: Jonathan Balisky
 Created on July 12, 2015, 7:13 AM
 Purpose:  Display ocean raise in height 
 */

//including iostream +iomanip


#include <iostream>
#include <iomanip>

using namespace std;
    
//No global variables. No F desired

int main(int argc, char** argv) {
    
    //Variables 
    float ocnRate = 1.5; //The average hight the ocean is raising in mm
    float ocnHght; //The current amount the ocean has been raised 
    
    //Header 
    
    cout<<left<<setw(8)<<"Year"<<left<<setw(10)<<"Raise in ocean level \n";
    
    //Outputting the raise in ocean level
    
    for (int years = 1; years<=25; years++){
        
        //Calculations 
        ocnHght+=ocnRate;
        
        cout<<fixed<<showpoint<<setprecision(1)
        
        <<left<<setw(8)<<years<<left<<setw(3)<<ocnHght<<"mm \n";
    }
    return 0;
}


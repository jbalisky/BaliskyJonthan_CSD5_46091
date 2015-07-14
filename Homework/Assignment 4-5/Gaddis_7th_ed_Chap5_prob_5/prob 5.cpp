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
    float calRate = 3.9; //The rate that calories are burnt per min.
    float calBrnt; //Total calories burn 
    
    //Header 
    
    cout<<left<<setw(8)<<"Mins"<<left<<setw(10)<<"Calories burnt \n";
    
    //Outputting the raise in ocean level
    
    for (int time = 10; time<=30; (time+=5)){
        
        //Calculations 
        calBrnt = calRate*time ; //Amount of calories burnt every five min
        //Outputting formated results 
        cout<<fixed<<showpoint<<setprecision(1)
        
        <<left<<setw(8)<<time<<left<<setw(3)<<calBrnt<<" \n";
    }
    //end
    return 0;
}


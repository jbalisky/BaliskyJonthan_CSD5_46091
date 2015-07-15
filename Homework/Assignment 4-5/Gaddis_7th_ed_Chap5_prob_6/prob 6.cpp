/* 
 File:   Prob 6.cpp
 Author: Jonathan Balisky
 Created on July 14, 2015, 4:13 pM
 Purpose:  Distance traveled 
 */

//including iostream +iomanip


#include <iostream>
#include <iomanip>

using namespace std;
    
//No global variables. No F desired

int main(int argc, char** argv) {
    
    //Variables 
    int speed; //Cost of membership
    int time; //Percent increase each year 
    int dstTrvl; //Distance traveled 
    
    //Header 
    //Asking user for input
    cout<<"What was the speed of the vehicle in MPH? ";
    cin>>speed;
    cout<<"How many hours was it traveling at that speed? ";
    cin>>time;
    //Check to see if user entered valid vaules  
    if (speed<0){
        cout<<"Invalid speed. "; //Invalid Speed
        return 1;
    }    
    else if (time<1){ //Time traveled less than 1 hour
        cout<<"Hours traveled needs to be greater than one!";
        return 1;
    }
    
    else//User entered valid values program continue
        
    cout<<left<<setw(8)<<"Hours"<<left<<setw(10)<<"Distance traveled \n"
    <<"------------------ \n";
    
    //Loop for calculating and outputting the distance traveled 
    
    for (int hours = 1; hours<=time; hours++){
        
        //Calculations 
        dstTrvl = speed*hours; //Current distance traveled 
        //Outputting formated results 
        cout<<left<<setw(8)<<hours<<left<<setw(3)<<dstTrvl<<" \n";
    }
    //end
    return 0;
}


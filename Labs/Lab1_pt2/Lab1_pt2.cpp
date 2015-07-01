/* 
 * File:   main.cpp
 * Author: Jonathan Balisky
 * Created on June 24, 2015, 4:35 PM
 * Purpose:  First Program to calculate a paycheck well not mine
 */

//System Libraries
#include <iostream>  //File I/O
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float hours,rate,pay;
    //Input Values Here
    hours=40.0f;//Hours Worked Units = hours
    rate=1e1f; //Pay Rate     Units = $'s/hour
    //Process Input Here
    pay=hours*rate;//Units = $'s
    //Output Unknowns Here
    cout<<"Hours worked = "<<hours<<"(hrs)"<<endl;
    cout<<"Pay Rate     = $"<<rate<<"/(hrs)"<<endl;
    cout<<"My Paycheck  = $"<<pay<<endl;
    //Exit the Stage
    return 0;
}
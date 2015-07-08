/* 
 File:   Prob 3.cpp
 Author: Jonathan Balisky
 Created on July 7, 2015, 8:13 PM
 Purpose: Checking for magic
 */

//Library iostream
//No Prototypes

#include <iostream>
using namespace std;

//Global const none


int main(int argc, char** argv) {

    //Variables 
    short month, day, year; 
    
    //Asking for input
    
    cout<<"To check for magicness please enter two digits for the day , month, and year \n";
    cin>>day>>month>>year;
    
    if((day*month)==year)
        cout<<"MAGIC MAGIC! Your date is magic!!! \n";
    else
        cout<<"You date, Im sorry to say, is not magic. \n";

    return 0;
}


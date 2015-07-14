/* 
 File:   Prob 4.cpp
 Author: Jonathan Balisky
 Created on July 7, 2015, 10:33 PM
 Purpose: Which Rectangle is bigger! 
 */

//Library iostream
//No Prototypes

#include <iostream>
using namespace std;

//Global const none


int main(int argc, char** argv) {

    //Variables 
    unsigned int lngth1, lngth2, wdth1, wdth2;
    
    //User input 
    cout<<"Please enter the length, then the width of the 1st rectangle in inches.\n";
    cin>>lngth1>>wdth1;
    cout<<"Please enter the length, then the width of the 2nd rectangle in inches.\n";
    cin>>lngth2>>wdth2;
    
    if ((lngth1*wdth1)>(lngth2*wdth2)){ //First is bigger
        cout<<"The first rectangle with the area of "<<lngth1*wdth1
        <<" inches is larger than the second with the area of "<<lngth2*wdth2
        <<" inches. \n";
    }
    else if ((lngth1*wdth1)==(lngth2*wdth2)){ //They are the same
        cout<<"The first rectangle with the area of "<<lngth1*wdth1
        <<" inches is the same as the second with the area of "<<lngth2*wdth2
        <<" inches. \n";
    }
    else  { //Second is bigger
        cout<<"The first rectangle with the area of "<<lngth1*wdth1
        <<" inches is smaller than the second with the area of "<<lngth2*wdth2
        <<" inches. \n";
    }
    return 0;
}


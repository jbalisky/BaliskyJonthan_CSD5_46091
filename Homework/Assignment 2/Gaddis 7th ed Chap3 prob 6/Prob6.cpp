/* 
 File:   Prob 6.cpp
 Author: Jonathan Balisky
 Created on July 3, 2015, 12:03 PM
 Purpose:  Displaying & calculating the weight of widgets
 */

//Library iostream + iomanip
#include <iomanip>
#include <iostream>
using namespace std;

//No Global const


int main(int argc, char** argv) {
	
	//Variables
    float wdgts = 9.2f;//Weight of each widget
    float pllt;//Weight of pallet
    float totWght;//Total weight
    float wdgtAmt;//Total amount of widgets
    float wdgtWht; //Total weight of widgets 
    //Formating the output so it rounds to the nearest whole number
    cout<<fixed<<showpoint<<setprecision(0);
    //Asking for user input
    cout<<"Enter the weight of the pallet, in pounds.\n";
    cin>>pllt;
    cout<<"Enter the weight of total weight with widgets on the pallet, in pounds.\n";
    cin>>totWght;
    //Calculations  
    wdgtWht = totWght-pllt;//Weight of just the widgets
    wdgtAmt = wdgtWht/wdgts; //Amount of widgets  
    cout<<"The amount of widgets you have, rounded to the nearest whole value, is:";
    cout<<wdgtAmt<<endl;
 
    
    //end
    
    return 0;
}

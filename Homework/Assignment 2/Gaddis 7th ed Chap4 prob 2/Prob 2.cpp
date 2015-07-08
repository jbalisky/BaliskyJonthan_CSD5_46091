/* 
 File:   Prob 2.cpp
 Author: Jonathan Balisky
 Created on July 7, 2015, 8:13 PM
 Purpose: Converting numbers to Roman Numerals 
 */

//Library iostream
//No Prototypes

#include <iostream>
using namespace std;

//Global const none


int main(int argc, char** argv) {

    //Variables 
    int numb;
    
    //Asking for input
    
    cout<<"enter a number between 1 and 10 \n";
    cin>>numb;
    //checking which number was entered  
    //then returning the corresponding Roman 
            
    if(numb ==10)
        cout<<numb<<" is X in Roman Numerals. \n";
    else if(numb ==9)
        cout<<numb<<" is IX in Roman Numerals. \n";
    else if(numb ==8)
        cout<<numb<<" is VIII in Roman Numerals. \n";
    else if(numb ==7)
        cout<<numb<<" is VII in Roman Numerals. \n";
    else if(numb ==6)
        cout<<numb<<" is VI in Roman Numerals. \n";
    else if(numb ==5)
        cout<<numb<<" is V in Roman Numerals. \n";
    else if(numb ==4)
        cout<<numb<<" is IV in Roman Numerals. \n";
    else if(numb ==3)
        cout<<numb<<" is III in Roman Numerals. \n";
    else if(numb ==2)
        cout<<numb<<" is II in Roman Numerals. \n";
    else if(numb ==1)
        cout<<numb<<" is I in Roman Numeral. \n";
    else
        cout<<numb<<" is not between 1 and 10 >:( \n"; //User did not enter a correct number
    //end
    return 0;
}


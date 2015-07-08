/* 
 File:   Prob 1.cpp
 Author: Jonathan Balisky
 Created on July 7, 2015, 6:13 PM
 Purpose:  Display Which of two number is larger 
 */

//Library iostream
//No Prototypes

#include <iostream>
using namespace std;

//Global const none

int main(int argc, char** argv) {
    //Variables 
    int a, b;
    
    //asking for input 
    
    cout<< "Please enter two different numbers pressing enter between the two \n"; 
    cin>>b>>a;
    
    //checking to see which variable is larger    
    if (a<b){
        cout<<b<<" is larger than "<<a<<". \n"; //b is larger
    
    }
    else
        cout<<a<<" is larger than "<<b<<". \n"; //a is larger
    
        
    return 0;
}



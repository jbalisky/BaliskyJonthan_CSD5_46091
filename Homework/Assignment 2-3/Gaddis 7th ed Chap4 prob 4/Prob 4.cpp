/* 
 File:   Prob 10.cpp
 Author: Jonathan Balisky
 Created on Sept 10, 2015, :33 PM
 Purpose: Which Rectangle is bigger! 
 */

//Library iostream
//No Prototypes

#include <iostream>
using namespace std;

//Global const none


int main(int argc, char** argv) {

    //Variables 
    int qnty = 0; //Amount of packages sold 
    float pkgP = 99.00f; //Retail price of package 
    
    //User input 
    
    do{
        cout<<"Please enter a the amount of packages being purchased\n"
                "(amount needs to be greater than zero): ";
        cin>>qnty;
    }while(qnty<1);
    
    
    return 0;
}


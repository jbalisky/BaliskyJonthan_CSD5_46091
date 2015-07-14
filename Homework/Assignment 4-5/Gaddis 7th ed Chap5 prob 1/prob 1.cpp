/* 
 File:   Prob 1.cpp
 Author: Jonathan Balisky
 Created on July 12, 2015, 4:23 PM
 Purpose:  Adding the sum of a number
 */

//including iostream 


#include <iostream>
using namespace std;

//No global variables. No F desired
//what is the problem yes
int main(int argc, char** argv) {
    //Variables 
    int sum = 0; //Sum of all the numbers
    int nmbr; //User entered number
    
    
    //Ask user for input
    
    cout<<"Please enter a positive number: ";
    cin>>nmbr;
    
    //Check to see if user entered a positive number
    if (nmbr>0){
    //Loop for adding
    
    for (int x = 1; x <= nmbr; x++ ){
        sum += x;
        
         }
    cout<<"The sum of your numbers is "<<sum<<endl;
    }
    //User entered either a zero or negative number 
    else{ 
        cout<<"Enter a postive number next time!\n";
        //error exit
    return 1;
    }
    return 0;
}


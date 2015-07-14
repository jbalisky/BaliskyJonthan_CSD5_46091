/* 
 File:   Prob 2.cpp
 Author: Jonathan Balisky
 Created on July 12, 2015, 7:03 AM
 Purpose:  Displaying acII 0 to 127
 */

//including iostream


#include <iostream>
using namespace std;

//No global variables. No F desired

int main(int argc, char** argv) {
    
    //Variables 
    
char acii = 0; //Put in a number get out 
    for (int y = 1; y<=8; y++){ //128 chars, 16 rows = 8 rows
    
        for (int x = 1;x <=16 ;x++){ //16 per row  
            cout<<acii++<<" ";
        }
    cout<<endl; 
    }
//End 
    return 0;
 
}


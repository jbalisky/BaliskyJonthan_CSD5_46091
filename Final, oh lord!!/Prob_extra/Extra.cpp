/* 
 File:   Prob 1.cpp
 Author: Jonathan Balisky
 Created on July 30, 2015, 11:18 aM
 Purpose:  Mastermind jr. 
 */

//Libraries 


#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;






int main(int argc, char** argv) {
    
    
    char order[] = {'e', 'd', 'c', 'b', 'a', 'j', 'i', 'h', 'g', 'f'};
    int ind1;
    int ind2;
    char  a,b;
    
    cout<<"EDCBAJIHGF order"<<endl;
    
    cout<<"Type the first  letter ";
    cin>>a;
    cout<<"Type the second letter please ";
    cin>>b;
    
    for(int i = 0; i<10; i++){
        if(a == order[i])ind1=i;
        if(b == order[i])ind2=i;
    }
    if(a>b ) {
        cout<<a<<"  is larger."<<endl;
         }

    else if(b>a ) {
    cout<<b<<" is larger."<<endl;
     }
    else{
        cout<<"They are the same"<<endl;
    }

    return 0;
}
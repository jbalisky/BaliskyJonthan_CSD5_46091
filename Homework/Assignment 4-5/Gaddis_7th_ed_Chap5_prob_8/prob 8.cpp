/* 
 File:   Prob 7.cpp
 Author: Jonathan Balisky
 Created on July 14, 2015, 6:13 pM
 Purpose:  Payed in Pennies  
 */

//including iostream +iomanip


#include <iostream>
#include <iomanip>

using namespace std;
    
//No global variables. No F desired

int main(int argc, char** argv) {
    
    //Variables 
    float pPD = .01; //Pennies per day
    int time; //Amount of time worked 
    float totErnd = 0; //Total amount earned in dollars  
    
    //Header 
    //Asking user for input
    cout<<"How many days did you work? ";
    cin>>time;    
    cout<<left<<setw(8)<<"Days"<<left<<setw(10)<<"Amount earned \n"
    <<"------------------ \n";
    
    //The amount of pennies earned 
    
    for (int days = 1; days<=time; days++){
        
        //Calculations
       
        totErnd += pPD; //Total amount of pennies earned 
        
        //Outputting formated results 
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<left<<setw(8)<<days<<left<<setw(3)<<pPD<<" \n";
        
          pPD *= 2;//How many pennies where earned that day
    }
    cout<<"Totaling in $"<<totErnd<<endl;
    
    //end
    return 0;
}


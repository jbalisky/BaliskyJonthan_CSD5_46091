/* 
 File:   Prob 9.cpp
 Author: Jonathan Balisky
 Created on July 14, 2015, 8:18 pM
 Purpose:  Hotel rooms  
 */

//including iostream +iomanip


#include <iostream>
#include <iomanip>

using namespace std;
    
//No global variables. No F desired

int main(int argc, char** argv) {
    
    //Variables 
    unsigned short nRooms = 0; //Number of rooms
    unsigned short nFull = 0; //Amount of rooms occupied 
    unsigned short nEmpty = 0; //Amount of empty
    unsigned short nFloors; //Number of floors
    float prntFll; //Total amount earned in dollars  
    
    //Header 
    //Asking user for input
    cout<<"How many floors does your hotel have? ";
    cin>>nFloors;    

    if (nFloors<1){ //user entered invalid # of floors
        cout<<"Your hotel cannot have less than one floor -_-";
        return 1;
    }
    else//User entered valid # of floors and input then proceeds 
    
        
        
    for (int x, y, floor = 11; floor<=nFloors; floor++){
        if(floor != 13){      
                     //Prompting the user for each floor
                do{
                     cout<<"For floor "<<floor<<" please enter the total rooms(must be greater than 10): ";
                     cin>>x; //total room
                }while(x<10);
                 do{
                     cout<<"Next enter the amount of occupied rooms on that floor: ";
                     cin>>y; //y has to be less than or equal to x
                }while(y>x || y<0);

                    //Calculations
                    nRooms+=x; //Total number of rooms 
                    nFull+=y; //Total amount of occupied rooms
                    nEmpty+=(x-y);  //Total amount of rooms Empty
                }
        else{
        }
  } 
    prntFll = (static_cast<float>(nFull)/static_cast<float>(nRooms)); //Percent of Rooms occupied 
    
    //Outputting formated results 
    cout<<"Total rooms:"<<nRooms<<", full:"<<nFull<<", empty:"<<nEmpty<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Percent of occupied rooms:%"<<prntFll;
         
        
        
    
    //end
    return 0;
}


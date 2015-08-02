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
    
    int const COL = 15;
    ifstream input;
    string temp;
    int const ROW = 10;
    char lett[ROW][COL];
    
    input.open("input.dat"); //open file
    
    for(int i = 0; i <ROW; i++){ //Read from file
        getline(input,temp);
        for(int j = 0; j< COL; j++)
            lett[i][j] = temp[j];
    }
    input.close(); //closing file
    
    cout<<"Unsorted from file 'input.dat'"<<endl;
    
    for(int i = 0; i<ROW; i++){ //displaying unsorted
        for(int j = 0; j<COL; j++){
            cout<<lett[i][j];
        }
        cout<<endl;
    }
    
    
    bool swap = false;//For the bubble swap function
    int  indx = 0; //Second index location for lett       
   
    
    do{
        swap = false;
        
        for(int i = 0; i<ROW-1; i++){ //ROW -1 because bubble swap is always columns - 1
            indx = 0;
            while(lett[i][indx]==lett[i+1][indx] && indx<COL)indx++;//Checking to see if current
                                                                         //index is equal then going to next location if they 
                                                                         //are equal. 
            if ( lett[i][indx]<lett[i+1][indx]){ //If that row and col. not equal 
                                                  //then check if first is larger if it is then swap all numbers
                //cout<<"i>i+1"<<endl;//For diagnostics 
                for(int j = 0; j <COL; j++){ //Swapping each 2 rows and their respective columns until all the rows are swapped
                lett [i][j] = lett [i][j]^lett[i+1][j]; //in place swap. to hopefully make Dr lehr happy so he give me extra credit
                lett [i+1][j] = lett [i][j]^lett[i+1][j];
                lett [i][j] = lett [i][j]^lett[i+1][j];
                }
                swap = true;            
            }
                
        }
    }while(swap == true);
    
    cout<<endl<<"Sorted "<<endl; //Outputting sorted letters
    for(int i = 0;i<ROW; i++){
        for(int j = 0;j<COL; j++){
            cout<<lett[i][j];
        }
        cout<<endl;
    }
    
    
    return 0;
}

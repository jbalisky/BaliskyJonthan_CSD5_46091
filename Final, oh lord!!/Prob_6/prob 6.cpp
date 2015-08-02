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
  
    int const COL = 7; //Columns
    int const ROW = 6; //Rows
    ifstream input; //for input file
    ofstream output; //For output to file
    int table[ROW][COL]; //2 d array for the table
    int temp = 0; //Temp for values
    
    input.open("table.dat"); //Open tables
    
    for(int i = 0; i < ROW; i++){ //Fill array with blank 
        for(int j = 0; j <COL; j++){
            table[i][j]=0;
        }
    }
    cout<<"Inputted from file!"<<endl;
    
     for(int i = 0; i < ROW-1; i++){ //Reading from file
        for(int j = 0; j <COL-1; j++){
            input>>table[i][j];
            cout<<setw(6)<<table[i][j]; //Displaying
        }
        cout<<endl;
     }
   input.close();
        //horizontal
      for(int i = 0; i < ROW-1; i++){//Adding the horizontal
          temp = 0;
        for(int j = 0; j <COL-1; j++){
            temp += table[i][j];
        }
          table[i][6] = temp;
      }
   
   //vertical
      for(int i = 0; i < COL; i++){ //Adding the vertical 
            temp = 0;
         for(int j = 0; j <ROW-1; j++){
             temp += table[j][i];
             
        }
            table[5][i] = temp; //Placing from temp to table location
     }
   cout<<"Rows and columns summed! "<<endl; 
       for(int i = 0; i < ROW; i++){ //Displaying the final table
        for(int j = 0; j <COL; j++){
        
            cout<<setw(6)<<table[i][j];
        }
        cout<<endl;
     }
   cout<<"output to augtable.dat!!!"<<endl;
   
   output.open("augtable.dat");
   
  for(int i = 0; i < ROW; i++){//Writing to file
    for(int j = 0; j <COL; j++){
        output<<setw(6)<<table[i][j];     
    }
   output<<endl;//End of row
  }
   output.close(); //File closed
   
    return 0;
}
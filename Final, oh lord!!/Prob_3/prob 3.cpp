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
void fillVec(vector<int>&, vector<int>&, int);
void prntVec(vector<int>&, vector<int>&, int, int);
int ** fllArry(int, int const);
void prntAry(int **, int, int const);


int main(int argc, char** argv) {
    //Variables 
   
    int const COL = 2; //Columns arrays
    vector<int> even; // Even Vectors
    vector<int> odd; //Odd vectors
    int **evenOdd;// Array with even and odd
    int vctSize; //Size of vectors
    int column; //Size of vectors
    
    
    srand(time(0));
    
    cout<<"Please input the the vector size: ";
    cin>>vctSize;

 //   fillVec(even, odd, vctSize);
    
    cout<<"How many collums would you like? ";
    cin>>column;
    
   // prntVec(even, odd, vctSize, column);
    
    evenOdd=fllArry(vctSize, COL);
    
    cout<<endl<<"Random Numbers from an array"<<endl;
    
    prntAry(evenOdd, vctSize, COL);
   
 for (int i = 0; i <vctSize; i++){
       delete evenOdd[i];
   }
   delete[] evenOdd;

    return 0;
}

/***************************************fillVec**************************************************
 * Purpose: Filling da vector with rand numbers 
 * Input: even, odd, vctSize
 * Output: none
 
 ***********************************************************************************************/
void fillVec(vector<int> &even, vector<int> &odd, int vctSize){
       
     int x; // Random number
    
    for(int i = 0; i<vctSize; ){ //Filling Dat even vector
        x = rand()%89+10; //Random number
        if (x % 2 == 0){ //If its even place in there 
            even.push_back(x);
            i++;
            //cout<<"Even = "<<x<<" ";
        }

    }
    for(int i = 0; i<vctSize; ){ //Filling dat Odd vec
        x = rand()%89+10;
        if (x % 2 == 1){ //if its odd put er in!
            odd.push_back(x);
            i++;
            //cout<<"Odd = "<<x<<" ";
        }
    }
    
}
/***************************************printVec**************************************************
 * Purpose: Print da vector with dem rand numbers 
 * Input: even, odd, vctSize , column
 * Output: none
 
 ***********************************************************************************************/
void prntVec(vector<int> &even, vector<int> &odd, int vctSize, int column){
     
 
    
    cout<<"Even numbers"<<endl;
    
    for (int i = 0; i<vctSize; i++){ //Printing even Numbers
        cout<<even[i]<<" ";
        if( (i+1) %column ==0){ //Giving an return when column size is reached
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"Odd numbers"<<endl;
    
    for (int i = 0; i<vctSize; i++){ //Printing odd numbers
        cout<<odd[i]<<" ";
        if( (i+1) %column ==0){ //Return when at column size
            cout<<endl;
        }
    }
    cout<<endl;
}

/***************************************fllArray**************************************************
 * Purpose: Filling da array with rand numbers 
 * Input: evenodd, vctSize, COL
 * Output: none
 
 ***********************************************************************************************/
int ** fllArry(int vctSize, int const COL){
    int **evenOdd;
     int x; // Random number
     
    // cout<<"Filling array \n";
     
evenOdd = new int *[vctSize]; //Creating 2 d dynamic array
    for (int i = 0; i<vctSize; i++){ //
        evenOdd[i] = new int[COL];
    }
//    for(int i = 0; i<vctSize; i++){//Filling the array with empty spaces
//        for(int j = 0; j<COL;j++){
//            evenOdd[i][j]= 0;
//        }
//    }
    
//cout<<"Array made \n";

    for(int i = 0; i<vctSize; ){ //Filling Dat even side of the array
        x = rand()%89+10; //Random number
        if (x % 2 == 0){ //If its even place in there 
            evenOdd[i][0]= x;
           // cout<<"Even odd = "<<evenOdd[i][0]<<endl;
            i++;
            //cout<<"Even = "<<x<<" ";
        }

    }
    for(int i = 0; i<vctSize; ){ //Filling dat Odd part of the array
        x = rand()%89+10;
        if (x % 2 == 1){ //if its odd put er in!
            evenOdd[i][1]= x;
           // cout<<"Even odd, odd = "<<evenOdd[i][1]<<endl;
            i++;
            //cout<<"Odd = "<<x<<" ";
        }
    }
    
//cout<<"Array filled /n";
return evenOdd;
 }

/***************************************printAry**************************************************
 * Purpose: Print da array with rand numbers 
 * Input: even, odd, vctSize, COL
 * Output: none
 
 ***********************************************************************************************/
void prntAry(int **evenOdd, int vctSize, int const COL){
     
    //cout<<"Printing array\n";
    
    cout<<endl<<"Even and odd Number from array numbers"<<endl;
    
    for(int i = 0; i<vctSize;i++){
        for(int j = 0; j<2; j++){
            cout<<evenOdd[i][j]<<" ";
        }
        cout<<endl;
    }

}
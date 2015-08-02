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

void retrand(short int[], int[], int, int);



int main(int argc, char** argv) {
   
    //Variables 
    const int n=5,ntimes=10000;
     int freq[n]={0}; //array for keeping track of the frequency of each number
    short int rndseq[]={9,61,88,101,121}; //Array of numbers to be picked

      srand(time(0)); //random seed
      
    retrand(rndseq,freq,n,ntimes);
    

    
   
    return 0;
}

/***************************************retrand**************************************************
 * Purpose: Checking the frequancy of randomly picked numbers  
 * Input: rndseq, freq, n, ntimes
 * Output:none
 
 ***********************************************************************************************/
void retrand(short int rndseq[], int freq[], int n, int ntimes){
    
    for(int i = 0; i < ntimes; i++){//Randomly picking an index ntimes then recording which one it was
       freq[rand()%n]++;
    }
    
    cout<<"Frequency of each number is as follows "<<endl;
    
    for(int i = 0; i<n; i++){//Displaying the results 
      cout<<rndseq[i]<<" occurred "<<
      freq[i]<<" times"<<endl;
    }
}

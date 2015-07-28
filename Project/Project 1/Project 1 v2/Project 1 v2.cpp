/* 
 File:   Project 1.cpp
 Author: Jonathan Balisky
 Created on July 19, 2015, 9:18 pM
 Purpose:  Mastermind jr. 
 */

//Libraries 


#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;

void prepare(int [], int&, short&, int&, bool[]);
//Global 

const int SIZE = 3;

int main(int argc, char** argv) {
    
    //Variables 
    
   int answer[SIZE];    //number of pin
   bool match[SIZE]; //Which numbers are matched
   string temp; //For the file output
   string usrG; //The users guess or input
   int xs; //How many x's
   short os; //How many o'x
   int guess; //How many guess the user had guessed 
   
   srand(time(0));  //setting time seed
   do{ 
      
       
       prepare(answer, xs, os, guess, match); //Initialize 
       
        srand(time(0));  //setting time seed
   do{ 
      

//      for(int i=0;i<3;i++){
        //cout<<answer[i]; //For diagonostics
//      }

       do{
           do {
               cout<<"Input your guess: "<<endl; //User enter guess
               getline(cin,usrG);
               //cin.ignore();

           }while(input validation here )); //Loop until user enters valid answer

         
      }
    
   }while(usrG[0]=='Y' );
    return 0;
}
/***************************************Prepare**************************************************
 * Purpose: Initializing values for the game.  
 * Input: answer, xs, os, guess, match
 * Output:
 * none
 
 ***********************************************************************************************/
void prepare (int answer[], int &xs, short &os, int &guess, bool match[]){
    
    for (int i = 0; i<3; i++){
        answer[i] = rand()%10; //creating answer from 0-9
        match[i] = false; //Set all to false
        //cout<<"answer = "<<answer[i]; //For diagonostics 
    }
   // cout<<endl;
    xs = 0;
    os = 0;
    guess = 9;
}
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
#include <ctime>

using namespace std;

   
//Global 

const int SIZE = 3;

int main(int argc, char** argv) {
    
    //Variables 
    
   int answer[SIZE];    //number of pin
   bool match[SIZE]; //Which numbers are matched
   int xs; //How many x's
   short os; //How many o'x
   int guess; //How many guess the user had guessed 
   
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

         

           cout<<"x="<<xs<<endl; //Right numbers in right space
           cout<<"o="<<os<<endl; //How many Correct number but in the incorrect space
           guess--;
           cout<<"Guesses left: "<<guess<<endl;

       }while(guess > 0 && xs != 3);// User out of guess or has guess correctly

       if ( xs == 3){ //user won
           cout<<"Congrats you won!"<<endl;
       }
       else{ //user lost
           cout<<"Sorry but you ran out of guesses. :( "<<endl;
          
       }
    
   }while(usrG[0]=='Y' );
   
   cout<<"See you again next time!"<<endl;
   
   
    return 0;
}
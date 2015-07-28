/* 
 File:   Game.cpp
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

void prepare(int [], int&, short&, int&, bool[], int);
bool isvalid(string); 
int compare(int [], short&, string, bool[]);
    
//Global 

const int SIZE = 3;

int main(int argc, char** argv) {
    
    //Variables 
    
   int level = 3; //Difficulty  of game
   int answer[SIZE];    //number of pin
   bool match[SIZE]; //Which numbers are matched
   string temp; //For the file output
   ofstream output;     // 
   ifstream input; //inputting to the file
   string usrG; //The users guess or input
   int xs; //How many x's
   short os; //How many o'x
   int guess; //How many guess the user had guessed 
   
   srand(time(0));  //setting time seed
   do{ 
       
      
      // cout<<"Call prepare."<<endl;//For diagonostics
       input.open("instructions.txt");
       if(input.is_open()){
           for (int i = 0; i<11; i++){
           getline(input,temp); //Change instructions 
           cout<<temp;
           }
           input.close();
        }
       else{
           cout<<"Instructions failed to open"<<endl;
       }
       cout<<endl;
       
        cout<<"What difficulty would you like to play? 1 for Easy or 2 for Hard: ";
       getline(cin, temp);// Do a do while later 
         //  }while(usrG.length() != 1);
      // }while(usrG[0]!=89 && usrG[0]!=78);
              
       if (temp[0] == 49){ //Level is easy
           level = 3;
       }
       else{ //User selected hard level
           level = 4;
       }
       
       prepare(answer, xs, os, guess, match, level); //Initialize 
       
       // cout<<"Call prepare."<<endl;//For diagonostics
       output.open("Answer.txt");
       
       for (int i = 0; i<3; i++){
        output<<answer[i];
        }
       output.close();
       

//      for(int i=0;i<3;i++){
        //cout<<answer[i]; //For diagonostics
//      }

       do{
           do {
               cout<<"Input your guess: "<<endl; //User enter guess
               getline(cin,usrG);
               //cin.ignore();

           }while(isvalid(usrG) == false); //Loop until user enters valid answer

           xs=compare(answer, os, usrG, match);

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
       do{ //Checking for an input of Y or N
           do{ //Checking for input over 1 char
               cout<<"Play again Y/N?"<<endl;
               getline(cin,usrG);
           }while(usrG.length() != 1);
       }while(usrG[0]!=89 && usrG[0]!=78);
           //}while(usrG[0] > 'Y' || usrG < 'N' || (usrG[0]>'N' && usrG[0]<'Y'));
   }while(usrG[0]=='Y' );
   
   cout<<"See you again next time!"<<endl;
   
   
    return 0;
}

/***************************************Prepare**************************************************
 * Purpose: Initializing values for the game.  
 * Input: answer, xs, os, guess, match
 * Output:
 * none
 
 ***********************************************************************************************/
void prepare (int answer[], int &xs, short &os, int &guess, bool match[], int level = 3){
    
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

/***************************************isvalid**************************************************
 * Purpose: To check whether or not the user entered 3 numbers 
 * Input: usrG
 * Output: True or false
 
 ***********************************************************************************************/
bool isvalid(string usrG){
   // cout<<"Call isvalid."<<endl; //For diagonostics
    if(usrG.length() != 3){
        cout<<"Please enter THREE numbers"<<endl;
        return false;
    }
    else{
        for(int i = 0; i < 3; i++){
            if (usrG[i] <48 || usrG[i] > 57){
                cout<<"Number not entered"<<endl;
                return false;
            }
        }
        // cout<<"number valid"<<endl;//For diagonostics
        return true;
    }
        
}
/***************************************Compare**************************************************
 * Purpose: To compare the user's guess with the answer and return how many 
 * were correct or incorrect. 
 * Input: answer, os, usrG, match
 * Output:xs
 
 ***********************************************************************************************/

int compare(int answer[], short &os, string usrG, bool match[]){
    int xs = 0;
    os = 0;
    
    for(int i = 0; i<3; i++){
       match[i] = false; //int all values to zero again
   } 
    //Checking for correct position 
   for(int i = 0; i<3; i++){ 
       if(answer[i] == (usrG[i]-48)){
           xs++;
           match[i] = true;
       }
   }
    //Checking for os
    for(int i = 0; i<3; i++){ //i is position of answer
        for(int j = 0; j<3; j++){ //j is position of usrG(user guess)
            if(j !=i && match[i] == false && answer[i] == usrG[j]-48){
                //cout<<"increased o"<<endl; //For diagonostics
                os++;
                match[i] = true;
            }
        }
    }
    return xs;
}
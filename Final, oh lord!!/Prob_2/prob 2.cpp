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

using namespace std;




int main(int argc, char** argv) {
    
    //Variables 
   
    bool exit; //Exit loop
    int num; //random number
    int x; //the nth pow that will be used
    int usrG; //user guess
    int guesses = 0; //Number of user guess
    int nGss; //Number of guesses
    char ply; //Play again?
    
    srand(time(0));//setting random time seed
    

  do{  
    x = rand()%9+1;//Random expo 
    num = rand()% static_cast<int>((pow(10, x)))+1; //Random number
    nGss = static_cast<int>(log(pow(10, x))/log(2)); // number of guesses 
    cout<<fixed<<setprecision(0);
    cout<<"I have a number between 1 and "<<pow(10, x)
       <<". Can you guess the number within "<<nGss<<" tries?"<<endl;
    
    //cout<<x<<"   "<<num<<"  "<<nGss<<endl;
      do{ 
            cout<<"Please input thy guess ";
             cin>>usrG; //User's guess
            guesses++;  //Amount th user has guessed

            exit = false;

             if (usrG == num){ //Right guess
                cout<<"You won!"<<endl;
                exit = true;
            }
             else if(guesses == nGss ){ //No guesses left
                cout<<"Too many tries"<<endl;
                exit = true;
            }
            else if(usrG < num){
                cout<<"Thine guess be to low."<<endl;
            }
            else if(usrG > num){
                cout<<"Thine guess be to high."<<endl;
            }

        }while(exit != true); //Exit 
        //cout<<"guesses"<<guesses<<endl; //For dia
        cout<<"Would thou play again? y or n? "; //Loop if players wants too
        cin>>ply;
  }while(ply == 'Y' || ply == 'y');
  
    return 0;

}


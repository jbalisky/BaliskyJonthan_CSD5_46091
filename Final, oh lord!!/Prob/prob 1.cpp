/* 
 File:   Prob 1.cpp
 Author: Jonathan Balisky
 Created on July 30, 2015, 11:18 aM
 Purpose:  Mastermind jr. 
 */

//Libraries 


#include <iostream>
#include <cmath>

using namespace std;

short rev(unsigned short);


int main(int argc, char** argv) {
    
    //Variables 
   
   unsigned short num; //converted input
   short conv; //Converted numbers
   
   
   cout<<"Please input the number ";
   cin>>num;
   
   conv = rev(num);   

   if(conv!=0)cout<<"You numbers, reversed: "<<conv<<endl;
   


    return 0;

}

/***************************************rev**************************************************
 * Purpose: Reversing numbers  
 * Input: num
 * Output:conv
 
 ***********************************************************************************************/
short rev(unsigned short num){

long total =0;//Sum of all the reversed numbers
short digit = 0; //Amount of digits the user inputted 
short temp; //Temp place holder

temp = num;

  while ((temp /=10) != 0){ //How many digits are there
     ++digit; 
  // cout<<"Digits = "<<digit<<endl; //For Diagnosics
}
   ++digit;
   //cout<<"Digits = "<<digit<<endl; //For Diagnosics
  
  
  for(int i = 0,j = digit; i < digit; i++,j--){
      temp = num%10;
      //cout<<"number "<<temp<<endl; //For Diagnosics
      total += temp * pow(10, j-1);
      num /=10;
     // cout<<"Total = "<<total<<endl; //For Diagnosics 
  }
  //cout<<"total = "<<total<<endl;
  
  if (total > 32767){
      cout<<"No conversion possible....dummy "<<endl;
      return 0;
  }
   temp = static_cast<short>(total);
  return temp;

}
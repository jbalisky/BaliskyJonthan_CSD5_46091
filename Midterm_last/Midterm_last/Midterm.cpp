/* 
 File:   Midterm.cpp
 Author: Jonathan Balisky
 Created on July 19, 2015, 5:18 pM
 Purpose:  For the midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
    
       
    //Variables 
    unsigned short nmbr; //Number 
    unsigned short nmbrD; //Decending
    unsigned short middle; //the middle of the x

    //Prompt for input
    
    cout<<"Type any odd number between 1-99: ";
    cin>>nmbr;
    middle = (nmbr/2);//finding the 
   
    for(int i = 0; i<middle; i++){ //Loop until the middle number For upper part of x
        
       for(int j=0;j<i;j++){ //outputting spaces
            cout<<" ";
        }
       cout<<nmbr<<setw(nmbr-i-1)<<i+1<<endl; //Spacing and outputting number
       nmbr-=1; //Decrementing the number by 1
    }
    
    if(nmbr>10){ //middle number 2 digits need more space
        cout<<setw(middle+2)<<nmbr<<endl;
    }
    else //Middle number less than 2 digits needs less space
        cout<<setw(middle+1)<<nmbr<<endl;  
    
    for(int i = 0; i<middle; i++){ //lower part of the X
        nmbr+=1;
        for(int j=middle;j>i+1;j--){
            cout<<" ";
        }

        cout<<nmbr<<setw(2+i*2)<<middle-i<<endl; //Outputting lower part
        
    }
    
    

}

//Solution to problem 2
void problem2(){
    cout<<"In problem # 2"<<endl<<endl;
        //Variables 
    
   string number;
    
   cin.ignore();
   
    do{ //Checking to make sure that the user entered only 4 char
        cout<<"input 4 digit number Number: "; //Asking for input
        getline(cin,number); //allowing for char and numbers 
        //cout<<number<<endl; //Diagnostics 
    }while(number.length()!=4);
    
    for(int i = 0; i<4; i++){ //Size of "number" will only be four
        cout<<number[i]<<" ";//i is incremented so checking location at i

        if(number[i]>47 && number[i]<58){//validating that in fact a number was entered for that location

            for(int j = 0; j<number[i]-48;j++){ //Number is = to acii - 48
                cout<<"*"; //loop until enough stars are printed
            }
        }
        else{
            cout<<"?";//user did not enter number
        }
        cout<<endl;
        
    }

}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
        //Variables 
    
   int number; //Check amount
   int a; // Current digit
   string payee; //Who is paying the bill
   string date; //Date the check was made
   string acctHld; //Account Holder
   string street;// Street portion of the address
   string cSZ; //City, state and zip
   
   //User input
   
   cout<<"Please any value for the check between $999-0: ";
   cin>>number; //Check amount
   cin.ignore();//Clear to use string
   cout<<"Enter the current date: "; //The date to be printed on the check
   getline(cin,date);
   cout<<"Next enter who the check is to: "; //Who the check is to
   getline(cin,payee);
   cout<<"Who is the check from: "; //
   getline(cin,acctHld);
   cout<<"Enter the street, press enter, then enter the city, state and zip:"; //Address
   getline(cin,street);
   getline(cin,cSZ);
   
   cout<<endl<<acctHld<<endl;//Begining of Header
   cout<<street<<endl<<cSZ<<endl;
   cout<<right<<setw(55)<<"Date: "<<date<<endl<<endl;//End of header
   cout<<"Pay to the order of:  "<<payee<<setw(35)<<"$ "<<number<<".00"<<endl<<endl; //End of first part of check
   
   //Output number in Words
  if(number/100 != 0){//3digit number 
      a = number/100; //first digit in the hundreds 
      if(a == 9)
          cout<<"Nine ";
      else if(a == 8)
          cout<<"Eight ";
      else if(a == 7)
          cout<<"Seven ";
      else if(a == 6)
          cout<<"Six ";
      else if(a == 5)
          cout<<"Five ";
      else if(a == 4)
          cout<<"Four ";
      else if(a == 3)
          cout<<"Three ";
      else if(a == 2)
          cout<<"Two ";
      else if (a == 1)
          cout<<"One ";
      cout<<"Hundred ";
  }
  // Not a "Teen" number aka  90-20
      a =number%100; //Gives the second digits of the number
      
      a/= 10; //only first digit matters 
    
      if(a == 9)
          cout<<"Ninety ";
      else if(a == 8)
          cout<<"Eighty ";
      else if(a == 7)
          cout<<"Seventy ";
      else if(a == 6)
          cout<<"Sixty ";
      else if(a == 5)
          cout<<"Fifty ";
      else if(a == 4)
          cout<<"Forty ";
      else if(a == 3)
          cout<<"Thirty ";
      else if(a == 2)
          cout<<"Twenty ";
      
      else if (a == 1){ //the second digit is equal to 1. So either a teen or a ten
          
          a = number%100; //Remainder will show which teen number 
          
          if(a == 19)
              cout<<"Nineteen "; //All the teen numbers from 19-11 + 10
          else if(a == 18)
              cout<<"Eighteen ";
          else if(a == 17)
              cout<<"Seventeen ";
          else if(a == 16)
              cout<<"Sixteen ";
          else if(a == 15)
              cout<<"Fifteen ";
          else if(a == 14)
              cout<<"Fourteen ";
          else if(a == 13)
              cout<<"Thirteen ";
          else if(a == 12)
              cout<<"Twelve ";
          else if (a == 11)
              cout<<"Eleven ";
          else if (a == 10)
              cout<<"Ten ";
      
      }
     // cout<<a<<endl;//Diacgonitcs for checking a
       if(a<10 || a>19){ //Last digit that is not part of the "teens"
          a = number%10;
          if(a == 9)
              cout<<"Nine ";
          else if(a == 8)
              cout<<"Eight ";
          else if(a == 7)
              cout<<"Seven ";
          else if(a == 6)
              cout<<"Six ";
          else if(a == 5)
              cout<<"Five ";
          else if(a == 4)
              cout<<"Four ";
          else if(a == 3)
              cout<<"Three ";
          else if(a == 2)
              cout<<"Two ";
          else if (a == 1)
              cout<<"One ";
          
    
      }
      cout<<"and No/100s Dollars"<<endl<<endl<<"Bank of CSC5 "<<endl<<endl;
      cout<<"For: Gotta pay the rent!"<<setw(35)<<acctHld<<endl;
      //end
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
        //Variables 
    
    unsigned short hours; //How many hours was the plan used
    float cost; //Amount due at the end of the month
    float cost2; // Suggested plan
    float savings; //How much can be saved
    char plan ; //Which plan
    
    do{ //Input validation make sure plan a b or c is selected 
    cout<<"Please enter either plan a, b, or c: "; //enter in which plan
    cin>>plan;
    } while (plan != 'a' && plan != 'b' && plan != 'c');
    cout<<"Enter the usage amount: "; //how much the plan was used
    cin>>hours;
    cout<<endl<<endl;
    
    cout<<setprecision(2)<<showpoint<<fixed;
    
    if(plan == 'a'){
        if(hours<=5){ //Plan a used for only 5 hours
            cout<<"Your monthly bill is $16.85."<<endl;
        }
        else if (hours> 5 && hours<=13){ //Hours used is more than five so a extra charge is added
            //calculations
            cost = 16.85+((hours-5)*.8); //Charge of .80 cents every hour past the five hour mark
            //Output
            cout<<"Your monthly bill is $"<<cost<<"."<<endl;
        }
        else if (hours> 13 && hours<=20){//customer should switch to package b
            
        
            if (hours>15){ //Extra charge for usage over 15 hours 
                cost2 = 23.85+((hours-15)*.65);
            }
            else {
                cost2 = 23.85;           
                 
            }       
            cost = 16.85+((hours-5)*.8); //cost 
            savings = cost - cost2;//differance between two plans 
            cout<<"Your monthly bill is $"<<cost<<"."<<endl;
            cout<<"However you could save $"<<savings
            <<" per month, by switching to package b!"<<endl; //Show how much could be saved
       }
        else{
            cost = 16.85+(((hours-5)*.8)+((hours-20)*1)); //Extra Extra cost of $1 
            cost2 = 29.55; //cost 
            savings = cost - cost2;//differance between two plans 
            cout<<"Your monthly bill is $"<<cost<<"."<<endl;
            cout<<"However you could save $"<<savings
            <<" per month, by switching to package c!"<<endl; //Show how much could be saved
       }
    }
            
    else if (plan == 'b'){
            if(hours<=15){ //Plan a used for only 5 hours
            cout<<"Your monthly bill is $23.85."<<endl;
        }
            else if (hours> 15 && hours<=23){ //Hours used is more than five so a extra charge is added
            //calculations
            cost = 23.85+((hours-15)*.65); //Charge of .65 cents every hour past the five hour mark
            //Output
            cout<<"Your monthly bill is $"<<cost<<"."<<endl;
        }
            else {//customer should switch to package c
                if (hours>25){ //Extra Extra charge for usage over 25 hours 
                cost = 23.85+((hours-15)*.65)+((hours-25)*.7);
            }
                else { //no extra extra charge
                cost = 23.85+((hours-15)*.65);
                 
            }       
            cost2 = 29.55; //cost of the c package
            savings = cost - cost2;//differences between two plans 
            cout<<"Your monthly bill is $"<<cost<<"."<<endl;
            cout<<"However you could save $"<<savings
            <<" per month, by switching to package c!"<<endl; //Show how much could be saved
       }
    }
    else{
        cout<<"Your monthly bill is $29.55"<<endl;
    }
    
  
    
    

}

//Solution to problem 5
void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
    
        //Variables 
    
    float hours; //How many hours worked
    float pay; // Amount should be payed
    float rate; // Pay rate
    float temp; //Temp holder for pay
    
    do{ //Input validation make sure positive number of hours 
    cout<<"Please enter amount of hours worked, in the format hh.hh: "; //enter hours worked
    cin>>hours;
    } while (hours <0);
    cout<<"Enter pay rate: "; //What is the pay rate per hour
    cin>>rate;
    cout<<endl<<endl;
    
    cout<<setprecision(2)<<showpoint<<fixed;
    
    if(hours <= 20){
        //Calculations 
        pay = hours*rate; //amount to be payed
     }
            
    else if (hours >20 && hours < 40){//Time an a half
        temp =  20.00;
        hours -= 20.00;
        pay = temp*rate ;
        hours *= 1.5; //Time and a half over 20 hours 
        pay += (hours*rate);// amount to be payed
    }
    else{ //All time over 40 is double time
        temp = 20;
        pay =temp*rate; //
        temp = hours-40
        pay += (temp*1.5)*rate;
        hours -= 50;
        hours *= 2; //twice the hours 
        pay += (hours*rate);// amount to be payed
    }
    
   cout<<"You have earned a total of $"<<pay<<endl;
   
}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
    
    //Variables 
    
   unsigned int x;//number
   float n; //number of terms 
   float sum; //sum of all the terms 
   float n2; //A place for n to be decremented 
   unsigned int power; //What x will b2e equal to
   
    
  //prompting  
        cout<<"Input how many terms: "; //Asking for input
        cin>>n; //Number of terms 
        cout<<"Input number for x: ";
        cin>>x; 
        n2 = n; //Setting n2 equal to n
        power = x;
        cout<<showpoint<<setprecision(3)<<fixed;
        
      
    
    for(int i = 0; i< n; i++){ //loop until n terms is reached
          //cout<<"n2 = "<<n2<<endl; //For Diagnostics 
    
        
       x = pow(power, i); //x^j power
      //cout<<" x = "<<x<<endl;//For Diagnostics 
        //calculations

      sum += (n2/x); //Sum of current amount of terms
      //cout<<"x = "<<x<<" sum = "<<sum<<endl; //For Diagnostics 
      n2-=1; //n2 is reduced per term
    }
        //Outputting the results 
   cout<<"The sum of x to n terms is "<<sum<<endl;
        
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}


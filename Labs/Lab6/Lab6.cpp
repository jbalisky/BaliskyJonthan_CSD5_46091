/*  
  File:   Lab 6.cpp
  Author: Jonathan Balisky
  Created on July 9, 2015, 8:45 PM
 *Edited on: July 10, 11, 2015
  Purpose:  Retirement Calculator
 */
//System Library
#include <iostream>
#include <iomanip>
using namespace std;


//Function Prototypes
void table();
void heading();
void retire(float, float, float, float, float, short);

int main(int argc, char** argv) 
{

    heading();
    //End 
    return 0;
}
/***************************************Table**************************************************
 * Purpose: Display the Title of each column 
 * Input:
 * None
 * Output:
 * none
 ***********************************************************************************************/
void table(){
    cout<<left<<setw(8)<<"year"<<left<<setw(12)<<"date"<<left<<setw(13)<<"savings"
     <<left<<setw(14)<<"Interest"<<left<<setw(15)<<"deposit"<<endl;
      
      
    
}
/*
**************************************Header**************************************************
 * Purpose: To Declare variables  calculate then display a Header with that information and 
 * to input variables floato "retire"
 * Input:
 * None
 * * Output:
 * salary = Average Salary in $'s
 * invRate = Investment rate
 * pDep = % Of the Salary to be deposited per month 
 * savReq = The amount required to retire
 **********************************************************************************************/
void heading(){
         //Declare Variables
    float salary = 100000; //Average Salary in $'s
    float invRate = 0.06f;//Investment Rate -> see Calif Muni Bonds
    float savReq;       //Savings required at retirement
    float pDep = 0.20f;   //Of your gross Salary -> Percentage Deposited 
    float totDpst;      //Yearly deposit in $'s
    float savings = 0;    //Initial Savings at start of Employment
    short year = 0;       //Start at year 0
    
            //Calculate required savings
   
    savReq = salary/invRate; //Required Savings
    totDpst=pDep*salary;   //Deposit based salary
    
    //Display the settings as a heading
    cout<<setprecision(0)<<fixed;
    cout <<"\tRetirement Calculator"<<endl
         <<"$"<< salary<<" = Salary"<<endl
         <<invRate*100<<"% = Investment Rate -> See Muni Bonds" << endl
         <<pDep*100<<"% = % of Salary to be deposited" << endl
         <<"$"<<savReq<<" is the amount needed to Retire "<<endl;
    table();

    retire(salary, invRate, savReq, totDpst, savings, year);
   
}
/*
*****************************************Retire*********************************************** 
 * Purpose: To display incrementally saving gained over the years until the calculated
 * goal is reached
 * Input:
 * salary = Average Salary in $'s
 * invRate = Investment rate
 * pDep = Of your gross Salary -> Percentage Deposited 
 * 
 * Output: 
 * savReq = Required Savings
 * invRate = Investment rate
 * savReq = The amount of savings required to retire. Based on the rule of 72
 * totDpst = Amount per year to deposit based on salary 
 * savings = Total cumulative saving to that pofloat
 * year = # of years 
 * date = current year
 **********************************************************************************************/

void retire(float salary, float invRate, float savReq, float totDpst,
        float savings, short year){
    
    //calculate
    float date = 2016;
    
    do{    
        //Output Results
        cout<<left<<setw(5)<<year++<<left<<setw(4)<<"06/01/"<<left<<setw(9)<<date+year<<"$"
                <<left<<setw(10)<<savings<<"$"<<left<<setw(10)<<(invRate*savings)<<totDpst<<endl;

          savings+= totDpst+(invRate*savings);
    }while(savings<savReq);
 cout<<left<<setw(5)<<year++<<left<<setw(4)<<"06/01/"<<left<<setw(9)<<date+year<<"$"
   <<left<<setw(10)<<savings<<"$"<<left<<setw(10)<<(invRate*savings)<<totDpst<<endl;
}

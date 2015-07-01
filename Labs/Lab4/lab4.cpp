/* 
 * File:   lab4.cpp
 * Author: Jonathan Balisky
 * Created on June 27, 2015, 3:00 PM
 * Purpose:  Lab, Energy Drinkers
 */
 //State libraries
 //iomanip Need for the setprecision function
 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 //Global Constants 
 
 const float CNVPCT=100.0f; //Conversion to percent
 
 //Execution
 
 int main(int argc, char** argv) {
 	//Values are in millions
 	float usVCrms = 11.88f;
 	float eVcrms = 6.52f;
 	int usPop = 318;
 	int ePop = 64;
 	float usPrcnt;
 	float ePrcnt;
 	//Source http://www.nationmaster.com/country-info/stats/Crime/Total-crimes#date
   
    //Calc Crimes 
    usPrcnt=(usVCrms/usPop)*CNVPCT;//%Of crime/population in America
    ePrcnt=(eVcrms/ePop)*CNVPCT; //%Of crime/population in england
    
    //Out put results
    cout<<"The percent of crimes to the population in America is %"<<setprecision(3)<<usPrcnt<<endl;
    cout<<"In contrast the precent of crime to the population in Egland is %"<<setprecision(4)<<ePrcnt<<endl;
     
     //Exit the stage!
    return 0;
 }

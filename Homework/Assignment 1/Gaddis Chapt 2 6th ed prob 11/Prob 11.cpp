/* 
  File:  prob 11.cpp
  Author: Jonathan Balisky
  Created on June 29, 2015, 6:00 PM
  Purpose:  Distance per tank
 */

//Using one library

#include <iostream>
using namespace std;

//No global variables

int main(int argc, char** argv) {
	
	// Variables
	short fllTnk = 20;
	float mpgTwn = 21.5f;
	float mpgHwy = 26.8f; 
	float dist; //distance possible
	
	//Calculating
	
	dist = fllTnk*mpgTwn;
	
	//Displaying and calculated
	
	cout<<"Maximum miles driven in town is "<<dist<<" miles.\n";
	dist = fllTnk*mpgHwy;
	cout<<"Maximum miles driven on highway is "<<dist<<" miles.\n";
	
	//End
	
	return 0;
}
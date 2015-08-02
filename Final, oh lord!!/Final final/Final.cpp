/* 
 File:   Midterm.cpp
 Author: Jonathan Balisky
 Created on July 19, 2015, 5:18 pM
 Purpose:  For the midterm
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

//Global Constants

//Function Prototypes
short rev(unsigned short);
void fillVec(vector<int>&, vector<int>&, int);
void prntVec(vector<int>&, vector<int>&, int, int);
int ** fllArry(int, int const);
void prntAry(int **, int, int const);
void retrand(short int[], int[], int, int);
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void extra();

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
        case 7: extra();break;
            default:;
        };
    }while(inN<8);
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
    cout<<"Type 7 for Extra credit"<<endl;
    cout<<"Type 8 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
 
   unsigned short num; //converted input
   short conv; //Converted numbers
   
   
   cout<<"Please input a number to be reversed ";
   cin>>num;
   
   conv = rev(num);   

   if(conv!=0)cout<<"You numbers, reversed: "<<conv<<endl<<endl;
   



}


//Solution to problem 2
void problem2(){
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

}

//Solution to problem 3
void problem3(){
    
    int const COL = 2; //Columns arrays
    vector<int> even; // Even Vectors
    vector<int> odd; //Odd vectors
    int **evenOdd;// Array with even and odd
    int vctSize; //Size of vectors
    int column; //Size of vectors
    
    
    srand(time(0));
    
    cout<<"Please input the the vector size: ";
    cin>>vctSize;

    fillVec(even, odd, vctSize);
    
    cout<<"How many collums would you like? ";
    cin>>column;
    
    prntVec(even, odd, vctSize, column);
    
    evenOdd=fllArry(vctSize, COL);
    
   // cout<<endl<<"Random Numbers from an array"<<endl;
    
    prntAry(evenOdd, vctSize, COL);
   
 for (int i = 0; i <vctSize; i++){
       delete evenOdd[i];
   }
   delete[] evenOdd;
}

//Solution to problem 4
void problem4(){
//Variables 
const int n=5,ntimes=10000;
 int freq[n]={0}; //array for keeping track of the frequency of each number
short int rndseq[]={9,61,88,101,121}; //Array of numbers to be picked

  srand(time(0)); //random seed

retrand(rndseq,freq,n,ntimes);
    

    

}

//Solution to problem 5
void problem5(){
    int const COL = 15;
    ifstream input;
    string temp;
    int const ROW = 10;
    char lett[ROW][COL];
    
    input.open("input.dat"); //open file
    
    for(int i = 0; i <ROW; i++){ //Read from file
        getline(input,temp);
        for(int j = 0; j< COL; j++)
            lett[i][j] = temp[j];
    }
    input.close(); //closing file
    
    cout<<"Unsorted from file 'input.dat'"<<endl;
    
    for(int i = 0; i<ROW; i++){ //displaying unsorted
        for(int j = 0; j<COL; j++){
            cout<<lett[i][j];
        }
        cout<<endl;
    }
    
    
    bool swap = false;//For the bubble swap function
    int  indx = 0; //Second index location for lett       
   
    
    do{
        swap = false;
        
        for(int i = 0; i<ROW-1; i++){ //ROW -1 because bubble swap is always columns - 1
            indx = 0;
            while(lett[i][indx]==lett[i+1][indx] && indx<COL)indx++;//Checking to see if current
                                                                         //index is equal then going to next location if they 
                                                                         //are equal. 
            if ( lett[i][indx]<lett[i+1][indx]){ //If that row and col. not equal 
                                                  //then check if first is larger if it is then swap all numbers
                //cout<<"i>i+1"<<endl;//For diagnostics 
                for(int j = 0; j <COL; j++){ //Swapping each 2 rows and their respective columns until all the rows are swapped
                lett [i][j] = lett [i][j]^lett[i+1][j]; //in place swap. to hopefully make Dr lehr happy so he give me extra credit
                lett [i+1][j] = lett [i][j]^lett[i+1][j];
                lett [i][j] = lett [i][j]^lett[i+1][j];
                }
                swap = true;            
            }
                
        }
    }while(swap == true);
    
    cout<<endl<<"Sorted "<<endl; //Outputting sorted letters
    for(int i = 0;i<ROW; i++){
        for(int j = 0;j<COL; j++){
            cout<<lett[i][j];
        }
        cout<<endl;
    }
}

//Solution to problem 6
void problem6(){
    
    int const COL = 7; //Columns
    int const ROW = 6; //Rows
    ifstream input; //for input file
    ofstream output; //For output to file
    int table[ROW][COL]; //2 d array for the table
    int temp = 0; //Temp for values
    
    input.open("table.dat"); //Open tables
    
    for(int i = 0; i < ROW; i++){ //Fill array with blank 
        for(int j = 0; j <COL; j++){
            table[i][j]=0;
        }
    }
    cout<<"Inputted from file!"<<endl;
    
     for(int i = 0; i < ROW-1; i++){ //Reading from file
        for(int j = 0; j <COL-1; j++){
            input>>table[i][j];
            cout<<setw(6)<<table[i][j]; //Displaying
        }
        cout<<endl;
     }
   input.close();
        //horizontal
      for(int i = 0; i < ROW-1; i++){//Adding the horizontal
          temp = 0;
        for(int j = 0; j <COL-1; j++){
            temp += table[i][j];
        }
          table[i][6] = temp;
      }
   
   //vertical
      for(int i = 0; i < COL; i++){ //Adding the vertical 
            temp = 0;
         for(int j = 0; j <ROW-1; j++){
             temp += table[j][i];
             
        }
            table[5][i] = temp; //Placing from temp to table location
     }
   cout<<"Rows and columns summed! "<<endl; 
       for(int i = 0; i < ROW; i++){ //Displaying the final table
        for(int j = 0; j <COL; j++){
        
            cout<<setw(6)<<table[i][j];
        }
        cout<<endl;
     }
   cout<<"output to augtable.dat!!!"<<endl;
   
   output.open("augtable.dat");
   
  for(int i = 0; i < ROW; i++){//Writing to file
    for(int j = 0; j <COL; j++){
        output<<setw(6)<<table[i][j];     
    }
   output<<endl;//End of row
  }
   output.close(); //File closed

}
//Solution to extra credit
void extra(){
    char order[] = {'e', 'd', 'c', 'b', 'a', 'j', 'i', 'h', 'g', 'f'};
    int ind1;
    int ind2;
    char  a,b;
    
    cout<<"EDCBAJIHGF order"<<endl;
    
    cout<<"Type the first  letter ";
    cin>>a;
    cout<<"Type the second letter please ";
    cin>>b;
    
    for(int i = 0; i<10; i++){
        if(a == order[i])ind1=i;
        if(b == order[i])ind2=i;
    }
    if(a>b ) {
        cout<<a<<"  is larger."<<endl;
         }

    else if(b>a ) {
    cout<<b<<" is larger."<<endl;
     }
    else{
        cout<<"They are the same"<<endl;
    }

}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
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
      cout<<"No conversion possible....dummy "<<endl<<endl;
      return 0;
  }
   temp = static_cast<short>(total);
  return temp;

}
/***************************************fillVec**************************************************
 * Purpose: Filling da vector with rand numbers 
 * Input: even, odd, vctSize
 * Output: none
 
 ***********************************************************************************************/
void fillVec(vector<int> &even, vector<int> &odd, int vctSize){
       
     int x; // Random number
    
    for(int i = 0; i<vctSize; ){ //Filling Dat even vector
        x = rand()%89+10; //Random number
        if (x % 2 == 0){ //If its even place in there 
            even.push_back(x);
            i++;
            //cout<<"Even = "<<x<<" ";
        }

    }
    for(int i = 0; i<vctSize; ){ //Filling dat Odd vec
        x = rand()%89+10;
        if (x % 2 == 1){ //if its odd put er in!
            odd.push_back(x);
            i++;
            //cout<<"Odd = "<<x<<" ";
        }
    }
    
}
/***************************************printVec**************************************************
 * Purpose: Print da vector with dem rand numbers 
 * Input: even, odd, vctSize , column
 * Output: none
 
 ***********************************************************************************************/
void prntVec(vector<int> &even, vector<int> &odd, int vctSize, int column){
     
 
    
    cout<<"Even numbers"<<endl;
    
    for (int i = 0; i<vctSize; i++){ //Printing even Numbers
        cout<<even[i]<<" ";
        if( (i+1) %column ==0){ //Giving an return when column size is reached
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"Odd numbers"<<endl;
    
    for (int i = 0; i<vctSize; i++){ //Printing odd numbers
        cout<<odd[i]<<" ";
        if( (i+1) %column ==0){ //Return when at column size
            cout<<endl;
        }
    }
    cout<<endl;
}

/***************************************fllArray**************************************************
 * Purpose: Filling da array with rand numbers 
 * Input: evenodd, vctSize, COL
 * Output: none
 
 ***********************************************************************************************/
int ** fllArry(int vctSize, int const COL){
    int **evenOdd;
     int x; // Random number
     
    // cout<<"Filling array \n";
     
evenOdd = new int *[vctSize]; //Creating 2 d dynamic array
    for (int i = 0; i<vctSize; i++){ //
        evenOdd[i] = new int[COL];
    }
//    for(int i = 0; i<vctSize; i++){//Filling the array with empty spaces
//        for(int j = 0; j<COL;j++){
//            evenOdd[i][j]= 0;
//        }
//    }
    
//cout<<"Array made \n";

    for(int i = 0; i<vctSize; ){ //Filling Dat even side of the array
        x = rand()%89+10; //Random number
        if (x % 2 == 0){ //If its even place in there 
            evenOdd[i][0]= x;
           // cout<<"Even odd = "<<evenOdd[i][0]<<endl;
            i++;
            //cout<<"Even = "<<x<<" ";
        }

    }
    for(int i = 0; i<vctSize; ){ //Filling dat Odd part of the array
        x = rand()%89+10;
        if (x % 2 == 1){ //if its odd put er in!
            evenOdd[i][1]= x;
           // cout<<"Even odd, odd = "<<evenOdd[i][1]<<endl;
            i++;
            //cout<<"Odd = "<<x<<" ";
        }
    }
    
//cout<<"Array filled /n";
return evenOdd;
 }

/***************************************printAry**************************************************
 * Purpose: Print da array with rand numbers 
 * Input: even, odd, vctSize, COL
 * Output: none
 
 ***********************************************************************************************/
void prntAry(int **evenOdd, int vctSize, int const COL){
     
    //cout<<"Printing array\n";
    
    cout<<endl<<"Even and odd Number from array numbers"<<endl;
    
    for(int i = 0; i<vctSize;i++){
        for(int j = 0; j<2; j++){
            cout<<evenOdd[i][j]<<" ";
        }
        cout<<endl;
    }

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

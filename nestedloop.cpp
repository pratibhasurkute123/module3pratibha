#include<iostream>
using namespace std;

int main(){
	     int i,j,rows;
	     
	     cout << "\n\n display the pattern like right angle triangle using :\n";
          cout << "---------------------------------------\n"; 
	
          cout << " Input number of rows: ";
          cin >> rows; // Read input for the number of rows from the user

          // Loop to print the right angle triangle pattern with asterisks
          for (i = 1; i <= rows; i++) // Loop for the number of rows
          {
              for (j = 1; j <= i; j++) // Nested loop 
              {
                  cout << "*"; 
              }
              cout << endl; 
              
        }
}

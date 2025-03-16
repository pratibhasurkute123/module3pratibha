#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int num,guess,attempt=5;
	char end1;
	srand(time(0));
	num = rand()%100+1;
	
	cout<<"guess a number between 1 too 100(you have attempt):"<<"end1";
	 
	 int i=0;
	 while(i<attempt)
	 {
	 	cout<<"attempt"<<(i+1)<<":";
	 	cin>>guess;
	 	
	 	if(guess>num){
	 		cout<<"Too high!Try again."<<end1;
		 }
		 else if(guess<num)
		 {
		 	cout<<"Too low!Try again."<<end1;
		 }
		 else
		 {
		 	cout<<"congratulations!you guessed the correct num!"<<end1;
		 	return 0;
		 }
		 i++;
	 }
	 cout<<"sorry,you've used all attempts.The correct num was"<<num<<"better luck next time!";
	 return 0;

}
	
	
	
	

  
    
      
      
	
	  

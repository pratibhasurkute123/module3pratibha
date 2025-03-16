#include<iostream>
using namespace std;          //multiplication table

int main(){
	int a,i;
	char end;
	
	cout<<"Enter a number:";
	cin>>a;
	
	for(int i=1;i<=10;i++){
		cout<< a <<"*"<<i<<"="<<a*i<<end;
		cout<<"\n";
	}
	return 0;
}

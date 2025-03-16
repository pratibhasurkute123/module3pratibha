#include <iostream>
using namespace std;
int main() {
  int length, breadth, area;
  
  cout<<"Enter the Length of Rectangle : ";
  cin>>length;
  
  cout<<"Enter the Breadth of Rectangle : ";
  cin>>breadth;
  
  area = length * breadth;
  cout<<"\nArea of Rectangle : "<< area;
  return (0);
}

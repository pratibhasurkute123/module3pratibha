#include <iostream>
  using namespace std;
  int main() {
      int n;
      cout << "Enter the number of elements: ";
      cin >> n;
      double numbers[n], sum = 0.0, average;
      cout << "Enter " << n << " numbers: ";
      for (int i = 0; i < n; i++) {
          cin >> numbers[i];
          sum += numbers[i]; // Add each number to sum
      }
      average = sum / n; // Calculate average
      cout << "The average is: " << average << endl;
      return 0;
  }

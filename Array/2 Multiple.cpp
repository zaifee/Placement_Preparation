#include <iostream>
using namespace std;

int main() {
  
  // Creating an array 
  int arr[10];
  int n;
cout << "How many number you want to add in array: " << endl;
cin >> n;
cout << "Enter the Numbers: " << endl;
  for(int i=0; i<10; i++){
    cin >> arr[i];
  }

  // Printing the result
  cout << "Printing the Double of the array " << endl;
  for(int i=0; i<10; i++){
     cout << 2*arr[i]  << " ";
  }




  return 0;
}

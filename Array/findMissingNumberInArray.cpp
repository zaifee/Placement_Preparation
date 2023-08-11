#include <iostream>
using namespace std;
void findMissingNumber(int arr[], int n){
  for(int i=0; i<n; i++){
    int index = abs(arr[i]);
    // Index start from 0 so trying to start from 1
    // Marking every element present in the array -1
    if(arr[index - 1] > 0){
      arr[index -1 ] *= -1;
    }
   
}
// Printing the Missing element
 for(int i=0; i<n; i++){
     if(arr[i] > 0){
      cout << i+1 << " ";
     }
    }
}
int main() {
  
 int arr[] = {1,3,3,5,5};
 int n = sizeof(arr)/sizeof(int);

 findMissingNumber(arr, n);




  return 0;
}

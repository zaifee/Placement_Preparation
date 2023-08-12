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



// Method 2 Sorting and Swapping Method

#include <iostream>
using namespace std;
void findMissingElement(int arr[], int n){
  int i=0;
  while(i < n){
    // Array index start from 0 so we are doing -1
    int index =  arr[i]-1;
    //  current element is not equal to index than we are swapping it
    if(arr[i] != index){
      swap(arr[index], arr[i]);
    }
    ++i;
  }
//   Printing the Missing Element using i+1; we assuming index start from 1 but actually start from 0
  for(int i=0; i<n; i++){
    if(arr[i] != i+1){
        cout << i+1 << " ";
    }
  }
}



int main() {
 
  int arr[] = {1, 5, 3, 3, 5};
  int n = sizeof(arr)/sizeof(int);

  findMissingElement(arr, n);



  return 0;
}





#include <iostream>
#include <vector>
using namespace std;
int pivotElement(vector<int> arr){
  int s = 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;
  while(s <= e){
    if(arr[mid] < arr.size() && arr[mid] > arr[mid+1]){  //mid+1 should exist in the array so we will check mid+1 if it is
    // exist in the array so including conditons
      return mid;
    }
    if(arr[mid] >= 0 && arr[mid-1] > arr[mid]){  //if our mid-1 element at index 0 and when we do mid-1 it will 
    // reach out -1 index which is incorrect so we should include condition
      return mid-1;
    }
    if(arr[s] > arr[mid]){
       e = mid-1;
    }else{
      s = mid + 1;
    }
    mid = s + (e-s)/2;
  }
  return -1;
}
int main() {
  vector<int> arr{9, 1,2,3, 4, 5, 6, 7, 8, 1, 2};
  int pivotIndex = pivotElement(arr);
  cout << "Pivot Element is : " << arr[pivotIndex] << endl;
  return 0;
}

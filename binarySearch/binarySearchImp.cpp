#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
// write a binary Search function
int binarySearch(vector<int> arr, int target){
  int start = 0;
  int end = arr.size()-1;
  int mid = start + (end-start)/2;
  while(start <= end){
    int element = arr[mid];
    if(element == target){
      return mid;
    }else if(target > element){
      start = mid+1;
    }else{
      end = mid-1;
    }
    mid = start + (end-start)/2;
  }
  // if element is not present
   return -1;
}
int main() {
  vector<int> arr{1, 3, 4, 6, 8, 10};
  int target;
  cin>>target;
  int indexOfBinarySearch = binarySearch(arr, target);
 if(indexOfBinarySearch == -1){
   cout << "Element Not present " <<endl;
 }else{
  cout << "Element Present at Index " << indexOfBinarySearch << endl;
 }


  return 0;
}

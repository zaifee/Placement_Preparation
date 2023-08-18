#include <iostream>
#include <vector>
using namespace std;
// first Occurence Function
int firstOccurence(vector<int> arr, int target){
  int start = 0;
  int end = arr.size()-1;
  int mid = start + (end-start)/2;
  int ans = -1;
  while(start <= end){
    int element = arr[mid];
    if(element == target){
      ans = mid;
      //left search // no need to return mid
      end = mid-1;
      
 }else if(target > element){
  // right search
   start = mid + 1;
 }else if(target <  element){
   end = mid-1;
 }
 mid = start + (end-start)/2;
  }
return ans;
}
int main() {
  vector<int> arr{1,2 , 3, 3, 3, 7, 8, 9};
  int target;
  cin >> target;
 int present = firstOccurence(arr, target);
 cout << "Element present at Index "<< present << endl;
  return 0;
}

// Printing the smallest Pivot Integer
#include <iostream>
#include<vector>
using namespace std;
int getPivot(vector<int> arr){
  int s= 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;
  while(s < e){
    if(arr[mid] > arr[0]){  //arr[0] rep 1 line
        s = mid+1;
    }else{
      e = mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
}
int main() {
  vector<int> arr{1,2,3 ,4, 5, 6, 5};
  int pivot = getPivot(arr);
  cout << "Pivot Element Picking smallest One " << arr[pivot] << endl;

  return 0;
}

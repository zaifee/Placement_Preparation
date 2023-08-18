#include <iostream>
#include <vector>
using namespace std;
int lastOccurence(vector<int>arr, int target){
  int s = 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;
  int ans = -1; //storing num in ans
  while(s <= e){
    int Num = arr[mid];
    if(Num == target){
      ans = mid;
      //right search -- bcz last Occurence hai to last me hi hogi
      s = mid + 1;
    }else if(target > Num){
      s = mid+1;
    }else {
        e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}
int main() {
  vector<int>arr{1,2, 2, 2, 2, 2, 3, 3 ,4, 5};
  int target;
  cin >> target;
  int index = lastOccurence(arr, target);
  cout << "Index at " << index << endl;
  return 0;
}

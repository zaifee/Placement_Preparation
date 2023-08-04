#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr;
  int ans = (sizeof(arr)/ sizeof(int));
  cout << ans << endl;


 cout << arr.size() << endl;
 cout << arr.capacity() << endl;
 
  arr.push_back(3);
 arr.push_back(4);
 
//  Print
for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
}
cout << endl;

// If we are explicity mentioned the size of the vector then the size and capacity will be the size that we have declared.

 
 cout << "Enter the Number of elements in the vector "<<endl;
 int n;
 cin >> n;
 vector<int> brr(n,0);
 cout << "The size of vector " <<  brr.size() << endl;
 cout <<"The capacity of the vector " <<  brr.capacity() << endl;
 
 for(auto i: brr){
     cout << brr[i] << " ";
 }

  return 0;
}

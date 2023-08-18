#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
 vector<int> arr{1, 3, 4, 6, 8, 10};
 
  int ans = binary_search(arr.begin(), arr.end(), 35);
  //there no need to explicitly declare target bcz binary_search stl take already included target as parameter
  if(ans == 0){
    cout << "Element Not Found " <<endl;
  }else{
    cout << "Element Found "  << endl;
  }

  return 0;
}


#include <iostream>
#include<vector>
using namespace std;
//  Union of two arrays if it does not contain duplicate elements 
int main()
{
  vector<int> arr{1, 3, 5, 7, 9};
  vector<int> brr{10, 8 , 6, 12};
  vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        ans.push_back(arr[i]);
    }
     for(int i=0; i<brr.size(); i++){
        ans.push_back(brr[i]);
    }
    
    cout << "Printing the Union of two arrays " <<endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    

    return 0;
}

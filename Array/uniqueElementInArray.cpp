// Finding the Unique Element in the array with no duplicates 
#include <iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> arr){
    int ans = 0; //any value xor with 0 remains unchanged
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
   int n;
 cout << "Enter the size of the array " << endl;
   cin >> n;
   vector<int> arr(n);
   
   for(int i=0; i<arr.size(); i++){
       cin >> arr[i];
   }
   int uniqueEle = findUnique(arr);  //we does not need to pass size
   cout << "Unique Element is " <<uniqueEle << endl;
   
   return uniqueEle;
   
  
   

    return 0;
}

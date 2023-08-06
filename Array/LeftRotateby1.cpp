
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,5,2};
    vector<int> brr;
   for(int i=1; i<arr.size(); i++){
       brr.push_back(arr[i]);
   }
   brr.push_back(arr[0]);
   for(int j=0; j<brr.size(); j++){
       cout << brr[j] << " ";
   }

    return 0;
}

// Intersection of two Array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   
   vector<int> a{1, 2, 3, 3, 4, 4, 6, 8};
   vector<int> b{3, 3, 3, 3, 4, 9, 10};
   vector<int> ans;
   
   for(int i=0;  i<a.size(); i++){
      int element = a[i];
      
    //   for every element of a we run loop on b
        for(int j=0; j<b.size(); j++){
            if(element == b[j]){
                //  b[j] = -1;Marking as -1
                ans.push_back(element);
                break;  
            }
        }
   }
   
    for(auto value: ans){
        cout << value << " ";
    }
   
   
   

    return 0;
}

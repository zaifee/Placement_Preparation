#include <iostream>
#include<vector>
using namespace std;
// find the triplet Sum
int main()
{
   vector<int> arr{10, 20, 30 , 20, 10};
   int sum = 60;
   for(int i=0; i<arr.size(); i++){
        int element_1 = arr[i];
       for(int j=i+1; j<arr.size(); j++){
           int element_2 = arr[j];
           for(int k=j+1; k<arr.size(); k++){
            //   cout << "Pair is " << "(" << element_1 << "," << element_2 << "," << arr[k] << ")" <<endl;
                int element_3 =  arr[k];
                if(element_1 + element_2 + element_3 == sum){
                    cout << element_1 << "," << element_2 << "," << element_3 << endl;
                    // break;
                }
           }
       }
   }

    return 0;
}

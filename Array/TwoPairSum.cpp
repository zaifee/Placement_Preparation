#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{1, 2, 4, 3, 6};
    vector<int> ans;
    int sum = 5;
    for(int i=0; i<v.size(); i++){
        int element = v[i]; //one pair
        for(int j=i+1; j<v.size(); j++){
            // cout << "(" << element <<","<< v[j] << ")" <<endl;  //another pair
            if(element + v[j] == sum){
                cout << "Your pair is: " << element << "," << v[j] << endl;
            }
            
        }
    }
    
  
    
    
    return 0;
}

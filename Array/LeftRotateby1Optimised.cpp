
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,5};
    int temp = arr[0];
    for(int i=0; i<arr.size()-1; i++){
        arr[i] = arr[i+1];
    }
    int n = arr.size()-1;
    // Putting at the last Index 
    arr[n] = temp;
    
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}

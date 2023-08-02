
#include <iostream>
#include<limits.h>

using namespace std;
// Maximum Element in the array
int main()
{
    int arr[]= {4, 5, 7, 9 , 10, 12, 0};
    int size = 7;
    int max = INT_MIN;
    for(int i=0; i<7; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}

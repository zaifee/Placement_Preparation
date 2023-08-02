
#include <iostream>
#include<limits.h>

using namespace std;
// Maximum Element in the array
int main()
{
    int arr[]= {4, 5, 7, 9 , 10, 12, -5};
    int size = 7;
    int min = INT_MAX;
    for(int i=0; i<7; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Mininum Element in the array " << min <<  endl;

    return 0;
}

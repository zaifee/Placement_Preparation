#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int start = 0;
    int end = size-1;
    while(start <= end){
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

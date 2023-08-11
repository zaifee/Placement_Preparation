
#include <iostream>
using namespace std;
void moveNegativeNumber(int arr[], int n){
    int l = 0;
    int h = n-1;
    while(l < h){
        if(arr[l]< 0){
            l++;
        }else if(arr[h] > 0){
            h--;
        }else{
            swap(arr[l], arr[h]);
        }
    }
}



int main()
{
    int a[] = {-1,-2,4,5,6,-7};
    int n = sizeof(a)/sizeof(int);
    
    moveNegativeNumber(a, n);
    
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}

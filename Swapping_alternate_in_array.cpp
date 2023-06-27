#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void printAlternate(int arr[], int size, int temp){
    for(int i=0; i<size; i+=2){
        if(arr[i+1] < size ){
           temp = arr[i];
           arr[i]= arr[i+1];
           arr[i+1] = temp;
        }
    }
}


int main()
{
    int temp;
    int odd[7] = {2, 5, 4, 7 , 9 , 3, 0};
    int even[6] = {4, 3, 1, 2, 0, 1 };
    
    printAlternate(odd, 7, temp);
    printArray(odd, 7);
    
    cout<<endl;
    
    printAlternate(even, 6, temp);
    printArray(even, 6);

    return 0;
}

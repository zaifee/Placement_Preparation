// Linear Search without fun
#include <iostream>

using namespace std;

int main()
{
    int arr[8] = {1, 4, 3, 7, 8,10, 0, 8};
    int size = 8;
    int key = 0;
    // Handle cases so we are using flag variable
    bool flag = 0; //Initially it is marked zero that means no element is found;
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            flag = 1;
        }
    }
    if(flag){
        cout << "Present" << endl;
    }else{
        cout << "Absent " << endl;
    }
   

    return 0;
}

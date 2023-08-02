// Linear Search
#include <iostream>

using namespace std;
bool find(int arr[], int size, int key){
    // linear Search
    for(int i=0; i<size; i++){
        if(arr[i] == key)
            return true;
    }
    
     return false;
}

int main()
{
    int arr[] = {2, 3, 8, 9, 10 };
    
    int size = 5;
    
    cout << "Enter the Key to find "<<endl;
    int key;
    cin >> key;
    
    if(find(arr, size, key)) {
        cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }

    return 0;
}

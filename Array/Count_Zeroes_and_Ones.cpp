// count zeros and ones in the array
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0};
    int size = 11;
    int countZeros = 0;
    int countOne = 0;
    for(int i=0; i<size; i++){
        if(arr[i]== 0){
            countZeros++;
        }
        if(arr[i] == 1){
            countOne++;
        }
    }
    cout << "Count of zeros " <<countZeros << endl;
    cout << "Count of One's " << countOne << endl;
    

    return 0;
}

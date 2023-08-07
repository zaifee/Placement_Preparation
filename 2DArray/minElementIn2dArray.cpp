#include<iostream>
#include <limits.h>
using namespace std;




int minIn2dArray(int arr[][3], int row, int col){
  int min = INT_MAX;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j] < min){
        min = arr[i][j];
      }
    }
  }
  return min;
}


int main() {
  int arr[3][3] = {{1, 2, 3}, {4,5,6}, {7,8,9}};
  int row = 3;
  int col = 3;
 
int ans_1 = minIn2dArray(arr, row, col);
cout << "Your Minimum Element in the 2D array is: " << ans_1 << endl;


}

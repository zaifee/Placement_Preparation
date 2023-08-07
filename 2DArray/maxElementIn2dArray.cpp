#include<iostream>
#include <limits.h>
using namespace std;




int maxIn2dArray(int arr[][3], int row, int col){
  int max = INT_MIN;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j] > max){
        max = arr[i][j];
      }
    }
  }
  return max;
}


int main() {
  int arr[3][3] = {{1, 2, 3}, {4,5,6}, {7,8,9}};
  int row = 3;
  int col = 3;
 
int ans = maxIn2dArray(arr, row, col);
cout << "Your Maximum Element in the 2D array is: " << ans << endl;



}

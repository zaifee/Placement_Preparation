#include<iostream>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;




void TransposeOfMatrix(int arr[][3], int row, int col, int tansposeArr[][3]){
     for(int i=0; i<row; i++){
      for(int j=0; j<col; j++){
          // swap(arr[i][j],arr[j][i]);
          tansposeArr[j][i] = arr[i][j];
      }
  }
}
void printArray(int arr[][3], int row, int col){
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}




int main(){
  int arr[3][3] = {{1, 2, 3}, {4,5,6}, {7,8,9}};
  int row = 3;
  int col = 3;
cout << "Your Array Before transpose of a Matrix " << endl;
printArray(arr, row, col);
int tansposeArr[3][3];

TransposeOfMatrix(arr, row, col, tansposeArr);
// TransposeOfMatrix(arr, row, col);
cout << "Your Array After transpose of a Matrix " << endl;
printArray(tansposeArr, row, col);

  return 0;

}

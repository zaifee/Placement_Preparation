#include<iostream>
using namespace std;



bool linearSearchIn2D(int arr[][3], int row, int col, int key){
  cout << "finding the Key in the 2d Array : " ;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j] == key){
        return true;
      }
    }
  }
  return false;
}

int main() {
  int arr[3][3] = {{1, 2, 3}, {4,5,6}, {7,8,9}};
  int row = 3;
  int col = 3;
  int key = 12;

  if(linearSearchIn2D(arr, row, col, key)){
     cout << "True " << endl;
  }else{
    cout << "False " << endl;
  }
  


}

#include<iostream>
using namespace std;


void printColWiseSum(int arr[][3], int row, int col){
  cout << "Printing Col-Wise Sum " << endl;
  for(int i=0; i<row; i++){
    int sum  = 0;
    for(int j=0; j<col; j++){
        sum += arr[j][i];
    }
    cout << sum << " " << endl;
  }
}

int main() {
  int arr[3][3] = {{1, 2, 3}, {4,5,6}, {7,8,9}};
  int row = 3;
  int col = 3;
  int key = 12;

 printColWiseSum(arr, row, col);

}

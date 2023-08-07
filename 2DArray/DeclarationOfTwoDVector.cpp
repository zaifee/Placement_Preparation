#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int> > arr;

  vector<int> a{1,2,3};
  vector<int> b{4,5,6};
  vector<int> c{7,8,9};

  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);

  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr.size(); j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
int rows = 3;
int cols = 3;
vector<vector<int> > vrr(rows, vector<int> (cols,-1));
for(int i=0; i<vrr.size(); i++){
    for(int j=0; j<vrr.size(); j++){
      cout << vrr[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Printing the 8 rows and 8 cols with initializing value -8  " << endl;
 int row1 = 5;
 int col1 = 5;
  vector<vector<int> > drr(row1, vector<int> (col1, -8));

for(int i=0; i<drr.size(); i++){
    for(int j=0; j<drr.size(); j++){
      cout << drr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

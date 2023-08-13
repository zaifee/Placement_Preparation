#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int startCol=0; startCol<mCols; startCol++){
        // Printing top to bottom
        if((startCol & 1) == 0){
        for(int i=0; i<nRows; i++)
            ans.push_back(arr[i][startCol]);
        }else{
        
        // Printing bottom to top
        for(int i=nRows-1; i>=0; i--){
            ans.push_back(arr[i][startCol]);
        }
        }
       
    }
     return ans;
}

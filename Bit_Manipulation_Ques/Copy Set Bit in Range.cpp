//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        l--;
        r--;
        for(int i=l; i<=r; i++){
            int temp = (1 << i);
            if(y & temp) //cheking
            x = x | (y & temp); //setting the value
        }
        return x;
    }
};


// Brute force approach -1 --> It gives TLE
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        bool repeated = false;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    repeated = true;
                    return i+1;
                }
                
            }
        }
        return -1;
    }
};

// Approach or Method 2
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // Using hash Map
        unordered_map<int,int> um;
        for(int i=0; i<n; i++){
            um[arr[i]]++;
        }
        // If count is greater than 1 we are returning the occurence of first Number
        for(int i=0; i<n; i++){
            if(um[arr[i]] > 1){
                return i+1;
            }
        }
        return -1;
    }
};

// Method -1 We can take three pointers and iterate over it 
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            int i, j, k;
            i=j=k= 0;
            
            while(i < n1 && j < n2 && k < n3){
                if(A[i] == B[j] &&  B[j]== C[k]){
                    ans.push_back(A[i]);
                    i++, j++, k++;
            }else if(A[i] < B[j]){
                i++;
            }else if(B[j] < C[k]){
                j++;
            }else{
                k++;
            }
            }
            return ans;
        }

};

// Above code fails bcz it stores the three duplicated element so we are using set
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            set<int> st;
            int i, j, k;
            i=j=k= 0;
            
            while(i < n1 && j < n2 && k < n3){
                if(A[i] == B[j] &&  B[j]== C[k]){
                    // ans.push_back(A[i]);
                    st.insert(A[i]);
                    i++, j++, k++;
            }else if(A[i] < B[j]){
                i++;
            }else if(B[j] < C[k]){
                j++;
            }else{
                k++;
            }
            }
            // Iterating the set
            for(auto i: st){
                ans.push_back(i);
            }
            return ans;
        }

}; time Complexity - O(n1 + n2 + n3)
  space C --> O(n1)

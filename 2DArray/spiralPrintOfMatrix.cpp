class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
       int total_elements = row*col;

        int startingRow = 0;
        int endingCol = col-1;
        int endingRow = row-1;
        int startingCol = 0;

        int count = 0;
        
        while(count < total_elements){
            // starting row;
            for(int i=startingCol; i<=endingCol && count<total_elements; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            // Print Ending Col
            for(int i=startingRow; i<=endingRow  && count<total_elements; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // Printing Ending Row
            for(int i=endingCol; i>=startingCol && count<total_elements; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            // Print Starting Col
            for(int i=endingRow; i>=startingRow && count<total_elements; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

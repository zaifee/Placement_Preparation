class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Sorting the Array
        sort(nums.begin(), nums.end());
        // After sorting comparing the adjacent element
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};

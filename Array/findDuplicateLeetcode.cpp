class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // // Sorting the Array
        // sort(nums.begin(), nums.end());
        // // After sorting comparing the adjacent element
        // for(int i=0; i<nums.size()-1; i++){
        //     if(nums[i] == nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;

        // Mark visied
        // int ans = -1;
        // for(int i=0; i<nums.size(); i++){
        //     // taking out array element
        //     int index = abs(nums[i]);
        // //   checking number is negative or not
        //     if(nums[index] < 0){
        //         ans = index;
        //         break;
        //     }
        //     nums[index] *= -1;
        // }
        // return ans;


        // Positioning Method
        while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};

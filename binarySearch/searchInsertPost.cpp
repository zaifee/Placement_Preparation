//this is a leetcode ques in which only concept of lower bound involved
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // applying lower bond
        int s = 0;
        int n = nums.size();
        int e = n-1;
        int ans = n; 
        int mid = s + (e-s)/2;
        while(s <= e){
            if(nums[mid] >= target){
                ans = mid;
                e = mid-1;
            }else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};

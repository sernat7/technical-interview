class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int c = 0;
        for(int i = 0; i < nums.size()-1; i++){
            for(int c = 1; c<nums.size(); c++)
            if(nums[c] + nums[i] == target && c!=i){
                vector<int> ans = {i,c};
                return ans;
            }
        }
    }
};
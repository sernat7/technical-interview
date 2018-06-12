class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

    int x = 1;
    int a = 1;
        
    if(!nums.empty()){
        for(int i=0; i< nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                x++;
            }
            else{
                x = 1;
            }
            a = max(x, a);
        }
        return a;
    }
    return 0;
    }
};
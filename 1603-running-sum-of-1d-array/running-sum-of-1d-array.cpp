class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for(int i=1 ; i< nums.size();i++){
            int runningSum=0;
            runningSum=nums[i-1]+nums[i];
            nums[i]=runningSum;
        }
        return nums;
    }
};
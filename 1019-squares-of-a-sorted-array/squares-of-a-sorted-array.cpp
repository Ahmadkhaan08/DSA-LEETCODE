class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int left=0;
        int right=n-1;
        int j=right;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[left])>abs(nums[right])){
                ans[j]=nums[left]*nums[left];
                left++;
            }else{
                ans[j]=nums[right]*nums[right];
                right--;
            }
            j--;
        }
        return ans;
    }
};
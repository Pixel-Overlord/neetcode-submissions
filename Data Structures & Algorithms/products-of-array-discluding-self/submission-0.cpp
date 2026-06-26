class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftProd = 1, rightProd = 1;
        vector<int> ans(nums.size());

        for (int i=0; i<nums.size(); i++)
        {
            ans[i] = leftProd;
            leftProd *= nums[i];
        }

        for (int i = nums.size()-1; i>=0 ; i--)
        {
            ans[i] *= rightProd;
            rightProd *= nums[i];
        }
        return ans;
    }
};
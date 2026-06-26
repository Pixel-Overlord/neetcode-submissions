class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int sum = 0;

        while (start < end)
        {
            sum = nums[start] + nums[end];

            if (sum < target)
            {
                start++;
            }
            else if (sum > target)
            {
                end--;
            }
            else
            {
                return {start+1,end+1};
            }
        }
        return {};
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<vector<int>> v(nums.size() + 1);
        vector<int> ans;

        for (int num : nums) {
            m[num]++;
        }

        for (auto& a: m) {
            v[a.second].push_back(a.first);
        }

        for (int i=v.size()-1; i >= 0 && ans.size() < k; i--) {
            for (int num : v[i]) {

                ans.push_back(num);

                if (ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};

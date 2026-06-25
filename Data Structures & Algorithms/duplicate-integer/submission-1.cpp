class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (auto a: nums) {
            if (s.find(a) != s.end()) {
                return true;
            }
            s.insert(a);
        }
        return false;
    }
};
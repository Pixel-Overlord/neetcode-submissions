class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;

        for (int i=0; i<strs.size(); i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            
            m[str].push_back(strs[i]);
        }

        for (auto a: m) {
            ans.push_back(a.second);
        }

        return ans;
    }
};

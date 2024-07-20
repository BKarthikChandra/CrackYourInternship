class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (auto& str : strs) {
            vector<int> count(26, 0);
            for (auto& ch : str) {
                count[ch - 'a']++;
            }
            string key;
            for (auto& cnt : count) {
                key += "#" + to_string(cnt);
            }
            mp[key].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }
        return result;
    }
};

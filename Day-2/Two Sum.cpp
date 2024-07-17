class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>answer;
        for(int i = 0; i < nums.size(); i++)
        {
            int b = target - nums[i];
            if(mp.find(b) != mp.end())
              {
                answer.push_back(mp[b]);
                answer.push_back(i);
                return answer;
              }
              mp[nums[i]] = i;
        }
        return answer;
    }
};

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n == 1)
            return {};
        for(int i : nums) {
            int m = (i - 1) % n;
            nums[m] += n;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(nums[i]   > 2*n) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};

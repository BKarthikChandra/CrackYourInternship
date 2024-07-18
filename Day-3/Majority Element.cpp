#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, ele = nums[0];
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(count == 0) {
                ele = nums[i];
                count = 1;
            } else if(nums[i] == ele) {
                count++;
            } else {
                count--;
            }
        }
        return ele;
    }
};

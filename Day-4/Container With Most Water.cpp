#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& h) {
        int area = 0;
        int l = 0;
        int r = h.size() - 1;
        while (l < r) {
            area = max(area, min(h[l], h[r]) * (r - l));
            if (h[l] < h[r]) {
                ++l;
            } else {
                --r;
            }
        }
        return area;
    }
};

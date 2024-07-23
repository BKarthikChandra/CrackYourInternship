#include <vector>
#include <algorithm>

class Solution {
public:
    int maxScore(std::vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0;
        for (int i = 0; i < k; i++) {
            total += cardPoints[i];
        }

        int maxSum = total;

        
        for (int i = 0; i < k; i++) {
            total += cardPoints[n - 1 - i] - cardPoints[k - 1 - i];
            maxSum = max(maxSum, total);
        }

        return maxSum;
    }
};

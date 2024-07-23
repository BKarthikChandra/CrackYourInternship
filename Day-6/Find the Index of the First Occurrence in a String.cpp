class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.length();
        int n2 = needle.length();

        if (n2 == 0) return 0;
        if (n2 > n1) return -1;

        for (int i = 0; i <= n1 - n2; ++i) {
            int j = 0;
            while (j < n2 && haystack[i + j] == needle[j]) {
                ++j;
            }
            if (j == n2) return i;
        }

        return -1;
    }
};

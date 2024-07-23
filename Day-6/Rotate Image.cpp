#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printDuplicates(string str) {
        unordered_map<char, int> freqMap;
        
        for (char c : str) {
            freqMap[c]++;
        }
        
        for (const auto& entry : freqMap) {
            if (entry.second > 1) {
                cout << entry.first << " ";
            }
        }
        cout << "\n";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        ob.printDuplicates(str);
    }
    return 0;
}

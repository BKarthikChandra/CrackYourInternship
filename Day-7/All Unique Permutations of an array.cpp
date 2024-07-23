//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
#include <bits/stdc++.h>
class Solution {
  public:
    void backtrack(vector<int>& arr, int start, int end, vector<vector<int>>& result)
    {
        if(start == end)
           result.push_back(arr);
        else
        {
            for(int i = start; i <= end; i++)
            {
                swap(arr[start],arr[i]);
                backtrack(arr,start+1,end,result);
                swap(arr[start],arr[i]);
            }
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>>result;
        backtrack(arr, 0, n - 1, result);
        set<vector<int>> uniqueSet(result.begin(), result.end());
        vector<vector<int>> uniqueResult(uniqueSet.begin(), uniqueSet.end());
        return uniqueResult;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;

        cin>>n;
        vector<int> arr(n);

        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends

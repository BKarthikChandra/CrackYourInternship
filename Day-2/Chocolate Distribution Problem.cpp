
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){

     sort(a.begin(), a.end());


     long long min_ans = LLONG_MAX;
        for (long long i = 0; i <= n - m; i++) {
            long long ans = a[i + m - 1] - a[i];
            if (ans < min_ans) {
                min_ans = ans;
            }
        }

        return min_ans;

    }
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}

		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}


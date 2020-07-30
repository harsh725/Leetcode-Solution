class Solution {
public:
	int coinChange(vector<int>& a, int x) {
		long long dp[x + 1];
		int n = a.size();
		dp[0] = 0;
		if (x == 0)
		{
			return 0;
		}
		// sort(a,a+n);
		for (int i = 1; i <= x; i++)
		{
			dp[i] = INT_MAX;
			for (int j = 0; j < n; j++)
			{	if (a[j] <= i)
					dp[i] = min(dp[i], dp[i - a[j]] + 1);
			}

			// dp[i]=ans;
		}
		if (dp[x] != INT_MAX)
			return dp[x];
		else
			return -1;
	}
};
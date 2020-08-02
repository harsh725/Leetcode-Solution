class Solution {
public:
	Solution()
	{
		std::ios::sync_with_stdio(false); cin.tie(NULL);
	}
	vector<int> twoSum(vector<int>& num, int sum) {

		vector<int> v(2);
		int n = num.size();
		unordered_map<int , int> m;

		for (int i = 1; i <= n; i++)
		{

			int y = sum - num[i - 1];
			// if(m[y]==i-1)/
			// continue;
			if (m.find(y) != m.end())
			{
				v[0] = m[y];
				v[1] = i - 1;
				return v;
			}
			m[num[i - 1]] = i - 1;
		}
		return v;

	}
};
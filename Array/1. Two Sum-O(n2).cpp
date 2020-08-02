class Solution {
public:
	Solution()
	{
		std::ios::sync_with_stdio(false); cin.tie(NULL);
	}
	vector<int> twoSum(vector<int>& num, int sum) {


		vector<int> v;
		int n = num.size();
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if ((num[i] + num[j]) == sum)
				{
					v.emplace_back(i); v.emplace_back(j);
					return v;
				}


			}
		}

		return v;
	}
};
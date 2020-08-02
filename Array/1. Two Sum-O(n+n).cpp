class Solution {
public:
    Solution()
    {
        std::ios::sync_with_stdio(false); cin.tie(NULL);
    }
    vector<int> twoSum(vector<int>& num, int sum) {

        vector<int> v(2);
        int n = num.size();
        map<int , int> m;
        for (int i = 0; i < n; i++)
        {
            m[num[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            // m[num[i]]=i;
            int y = sum - num[i];
            if (m[y] == i)
                continue;
            if (m[y] != 0)
            {
                v[0] = m[y];
                v[1] = i;
                return v;
            }
        }
        return v;

    }
};
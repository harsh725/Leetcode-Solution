class Solution {
public:
    Solution()
    {
        ios::sync_with_stdio(false); cin.tie(NULL);
    }
    vector<int> decompressRLElist(vector<int>& num) {
        int sum = 0;
        for (int i = 0; i < num.size(); i += 2)
            sum += num[i];
        vector<int> ans(sum);
        int x = 0;
        for (int i = 0; i < num.size() - 1; i += 2)
        {
            int f = num[i], v = num[i + 1];
            while (f--)
                ans[x++] = v;
            // ans.emplace_back(v);
            // vector<int> temp(f,v);
            // ans.insert(ans.end(),temp.begin(),temp.end());
        }
        return ans;
    }
};
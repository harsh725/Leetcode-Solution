class Solution {
public:
    Solution()
    {
        ios::sync_with_stdio(false); cin.tie(NULL);
    }
    string countAndSay(int n) {

        string s = "1";
        n--;
        while (n--)
        {
            string temp = "";
            for (int i = 0; i < s.size();)
            {
                char c = s[i];
                int d = 0;
                while (s[i] == c)
                {
                    d++; i++;
                    if (i == s.size())break;
                }
                temp += to_string(d);
                temp += c;

            }
            s = temp;

        }
        return s;
    }
};
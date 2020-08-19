bool isvowel(char x)
{
    char a = toupper(x);
    if (a == 'A' or a == 'E' or a == 'I' or a == 'O' or a == 'U')
        return 1;
    return 0;
}

class Solution {
public:
    Solution()
    {
        ios::sync_with_stdio(false); cin.tie(NULL);
    }
    string toGoatLatin(string S) {

        stringstream check(S);
        string temp, ans = "";
        int c = 1;
        while (!check.eof())
        {
            check >> temp;
            if (!isvowel(temp[0]))
            {
                temp += temp[0];
                temp.erase(temp.begin());
            }
            temp += "ma";
            string x(c, 'a');
            x += " ";
            temp += x;
            ans += temp;
            c++;
            x.clear();



        }
        ans.pop_back();
        return ans;


    }
};
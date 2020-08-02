class Solution {
public:
    bool detectCapitalUse(string word) {

        int c = 0, n = word.size();
        for (int i = 0; i < n; i++)
        {
            if (isupper(word[i]))
                c++;
        }
        if (c == n or c == 0)
            return true;
        if (c == 1 and isupper(word[0]))
            return true;

        return false;

    }
};
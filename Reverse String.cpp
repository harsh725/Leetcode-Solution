

class Solution {
    
   
public:
     Solution()
    {
        std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    }
    
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<n/2;i++)
            std::swap(s[i],s[n-1-i]);
    }
};
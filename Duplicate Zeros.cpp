class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        // auto l=arr.end();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                auto x=arr.begin()+i;
                arr.insert(x,0);
                i++;
                arr.pop_back();
            }
        }
        // arr.erase(arr.end()-c,arr.end());
        }
};
class Solution {
public:
    vector<int> sums;
    int sum=0;
    Solution(vector<int>& w) {
        
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        for(int i=0;i<w.size();i++)
        {sum+=w[i];
        sums.emplace_back(sum);
        }
     
    }
    
    int pickIndex() {
        int x=rand()%sum;
        auto res=upper_bound(sums.begin(),sums.end(),x);
        return res-sums.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
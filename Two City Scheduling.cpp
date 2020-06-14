
int mincost(vector<vector<int>>& dp,int a,int b,int index,vector<vector<int>>& arr)
{
    //If a==0
    if(dp[a][b]!=0)
        return dp[a][b];
    if(a==0)
    {
        int sum=0;
        int i=arr.size()-1;
        while(b--)
        {
            sum+=arr[i--][1];
            
        }
        return sum;
    }
    //If b==0
    if(b==0)
    {
        
        int sum=0;
        int i=arr.size()-1;
        while(a--)
        {
            sum+=arr[i--][0];
            
        }
        return sum;
    }
    dp[a][b]= std::min(mincost(dp,a-1,b,index+1,arr)+arr[index][0],mincost(dp,a,b-1,index+1,arr)+arr[index][1]);
    return dp[a][b];
}

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& cost) {
        int n=cost.size();
        int a=n/2,b=n/2;
vector<vector<int>> dp(a+1,vector<int> (b+1,0));
        int res=mincost( dp,a, b,0,cost);
        return res;
    }
};
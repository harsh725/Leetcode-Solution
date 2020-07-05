 

bool cmp(pair<char ,int > a,pair<char ,int> b)
 {int a1=a.second;
  int b1=b.second;

    return a1>b1;
}
 pair<char,int> freq[255];
void start()
{

char a=0;
for(int j=0;j<255;j++)
{
    freq[j].first=a++;
    freq[j].second=0;

}

}
class Solution {
    
    
public:
    Solution()
    {
    std::ios::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(0);     
    }
    string frequencySort(string s) {
    start();
     int i,n=s.size();
        for(i=0;i<n;i++)
        {
            freq[s[i]].second++;
                
        }
        sort(freq,freq+255,cmp);
            i=0;
        string str;
        for(i=0;freq[i].second>0;i++)
            str.append(freq[i].second,freq[i].first);
            // while(freq[i].second!=0)
            // {
            //     while(freq[i].second--)
            //         str+=(freq[i].first);
            //   i++;
            // }
        return str;
    
    }
    
};
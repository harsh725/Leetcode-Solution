class Solution {
public:
    int numberOfSteps (int num) {
        int c=0;
        if(num%2!=0)
            c++;
        while(num>1)
        {
                     num/=2;

            if(num%2!=0) 
                c++;
            
            c++;
        }
        return c;
        
    }
};
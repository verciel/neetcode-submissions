class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int n=boxes.length();
        vector<int> ans(n, 0);

        vector<int> pref(n, 0), suff(n, 0);
        
        int cnt=(boxes[0]-'0');
        for(int i=1;i<n;i++)
        {
            pref[i]= pref[i-1]+cnt; 
            cnt+= (boxes[i]-'0');
        }

        cnt= (boxes[n-1]-'0');
        for(int i=n-2;i>=0;i--)
        {
            suff[i]= suff[i+1]+ cnt;
            cnt+= (boxes[i]-'0');
        }

        for(int i=0;i<n;i++)
        {
            ans[i]=pref[i]+suff[i];
        }

        return ans;
    }
};
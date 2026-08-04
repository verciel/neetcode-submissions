class Solution {
public:
    bool rec(string &s1, string &s2, string &s3, int i, int j, int k,        vector<vector<int>> &dp)
    {
        int x=s1.length(), y=s2.length(), z=s3.length();
        if(k==z)
        {
            return true;
        }

        if(dp[i][j] != -1) return dp[i][j];

        bool left=false, right=false;
        if(i<x && s3[k] == s1[i]) left=rec(s1,s2,s3,i+1,j,k+1, dp);
        if(j<y && s3[k] == s2[j]) right=rec(s1,s2,s3,i,j+1,k+1, dp);

        return dp[i][j]=left|right;
    }

    bool isInterleave(string s1, string s2, string s3) 
    {
        int x=s1.length(), y=s2.length(), z=s3.length();
        if(x+y != z) return false;
        vector<vector<int>> dp(x+1, vector<int>(y+1, -1));
        return rec(s1,s2,s3,0,0,0,dp);
    }
};

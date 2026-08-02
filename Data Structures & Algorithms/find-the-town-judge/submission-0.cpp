class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        //indegree of judge should be n-1
        //outdegree should be 0
        vector<int> indegree(n+1,0), outdegree(n+1,0);
        for(auto& it:trust)
        {
            int a=it[0], b=it[1];
            indegree[b]++;
            outdegree[a]++;
        }

        for(int i=0;i<n+1;i++)
        {
            if(indegree[i] == n-1 && outdegree[i] == 0) return i;
        }

        return -1;
    }
};
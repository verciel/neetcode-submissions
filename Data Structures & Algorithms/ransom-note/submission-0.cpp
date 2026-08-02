class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char, int> mag;
        for(auto&it:magazine) mag[it]++;

        for(auto&it:ransomNote)
        {
            if(mag[it] > 0 ) mag[it]--;
            else return false;
        }

        return true;
    }
};
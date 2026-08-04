class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0,r=n-1;
        while(i<r)
        {
            while(!isalnum(s[i]))
                i++;
            while(!isalnum(s[r]))
                r--;
            if(tolower(s[i]) != tolower(s[r]))
                return false;
            i++;
            r--; 
        }
        return true;
    }
};

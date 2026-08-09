class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j;
        for(intj=s.size();j>0;j--)
        {
        if(s[i]==s[j])
        i++;
        j--;
            
          return true;
        }
        return false;
    }
};

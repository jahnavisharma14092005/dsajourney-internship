class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j;

        for(int j=s.size()-1;j>0;j--)
        {
        if(s[i]!=s[j])
        return false;
        
        i++;
        j--;
        
        }
          return true; 

    }
};

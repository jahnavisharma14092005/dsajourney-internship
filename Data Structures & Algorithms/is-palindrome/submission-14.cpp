class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(j>i)
        {
            if(j>i&&(!alphanum(s[i])))
            {
                i++;
                continue;
            }
             if(j>i&&(!alphanum(s[j])))
            {
                j--;
                continue;
            }
            if(tolowers[i]!=tolower s[j])
                 return false;
            
                   i++;j--;
        }
        return true;
    }
            bool alphanum(char c)
            {return ((c>='a'&&c<='z')||(c>='0'&&c<='9'));    
            }
};
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
               
            

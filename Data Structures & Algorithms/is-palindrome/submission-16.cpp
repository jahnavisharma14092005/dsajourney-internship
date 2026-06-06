class Solution 
{
 public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(j>i)
        {
            if(j>i&&(!alphanum(s[j])))
            
            {
            
                j--;
                continue;
            }
            else if(j>i&&(!alphanum(s[i])))
            {
                i++;
                continue;
            }
            
              if(tolower(s[j])!=tolower(s[i]) )
            {     
                return false;
            }
                i++;
                j--;
        } return true;
    }
             bool alphanum(char c)
            {
                return (c>='A'&&c<='Z'||c>='a'&&c<='z'||c>='0'&&c<='9');
            }
                  
    
};
    

    




            

        
    
            
             
        
        
    


        

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
               
            

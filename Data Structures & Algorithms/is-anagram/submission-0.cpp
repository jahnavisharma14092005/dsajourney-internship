class Solution {
public:
    bool isAnagram(string s, string t) 
    {
           for(int i=0;i<s.length();i++)
           { bool found=false;
            for(int j=0;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    found=true;
                    t[j]='#';

                   break;
                }
                  
            }
           

           if(!found)
           return false;
           }
    
        return true;
    }

          
            
           
        
};


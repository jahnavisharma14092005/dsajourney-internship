class Solution 
{
 public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int>mp;
        {
            for(auto x:s)
            mp[x]++;
            
        
         unordered_map<char,int>mp1;
            {
              for(auto y: t)
            
                mp1[y]++;
            
             if(mp!=mp1)
             return false;
            }
        }
        
        return true;
         

        
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
          unordered_map<char,int>mp;
          {
          for(auto p:s)
          mp[p]++;
          
          unordered_map<char,int>mp1;
          {
          for(auto d:t)
          mp1[d]++;
          
          if(mp!=mp1)
          {
          return false;
          }
          }
          } 
          return true;
    }
};
# DID IT MYSEF HURRAAYYYYYYY.
# REMEMBER COMPARING MAPS..LEARNT THIS FROM THIS QUES.


          








        
    

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums)
        mp[x]++;
        vector<vector<int>>bucket(nums.size()+1);
        for(auto p:mp)
        bucket[p.second].push_back(p.first);
         
         vector<int>ans;
          for(int i=bucket.size()-1;i>=0;i--)
         {  for(int x:bucket[i])
          ans.push_back(x);
          if(ans.size()==k)
           return ans;
         }
          return ans;
        
        
    }
};
 MISTAKES- 
     1.I DID FREQ[X]++ INSTEAD OF mp++
     2. for(auto p:mp) in line 8 i wrote for(auto p:nums).we haver to iterate over frequencies which r stored in maps in key,value format.
3. i wrote bucket(p.second) which is wrong Because bucket is a vector For vectors, we access elements using square brackets:
4. i passed ans.push_back(bucket[i]) thats not allowed coz bucket is a vector nd ans.push_back expects int value only so we need for(int x:bucket[i])
    5. we need to form a bucket like a vector in vector coz if we do vector<int>bucket nd suppose freq 3-1 
                                                                                                  freq2- 2
                                                                                                   freq 2- 5 . we cannot store bucket[2[=[[2,5]] 
                                                                                                  
    

class Solution 
{
 public:
    vector<vector<int>>threeSum(vector<int>& nums) 
    {
       vector<vector<int>>ans;
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
          int j=i+1;
          int k=nums.size()-1;
           if(nums[i]==nums[i-1])
           {
             i++;
              continue;
           }
             
              while(k>j)
              { int sum=nums[i]+nums[j]+nums[k];
                
                   
                   
                   if(sum>0)
                   {
                      k--;

                   }
                   else if(sum<0)
                   {
                    j++;
                   }
                   else
                   {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                   } 
                     while(j>0 && nums[j]==nums[j-1])  
                    {
                         j++;
                          
                    }
                    while(k>0 && nums[k]==nums[k+1])
                    {
                      k--;
                    
                    }
              }
        }
           return ans;
    }
};
                       

                
              
                              
                             
                            
                    
                    

                            
                       

                  
            
           


         
        
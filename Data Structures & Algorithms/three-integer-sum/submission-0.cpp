class Solution 
{
 public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        
        sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size();i++)
           {
             int j=i+1;
             int k=nums.size()-1;
             if(i>0&&nums[i]==nums[i-1])
             continue;
             while(j<k)
              int sum=nums[i]+nums[j]+nums[k];
              if(sum<0)
              {
                j++;
                }
                if(sum>0)
                {
                    k--;
                }
                return {nums[i],nums[j],nums[k]};
              
            }
           
         return {};
    }
};

               
              
               
              
            
              

               
              


                   
                   


        
    }
};

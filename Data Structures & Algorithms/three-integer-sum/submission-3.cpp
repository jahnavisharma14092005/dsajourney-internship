class Solution 
{
 public:
    vector<vector<int>>threeSum(vector<int>& nums) 
    {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
         for(int i=0;i<nums.size();i++)
           {
             int j=i+1;
             int k=nums.size()-1;
             if(i>0&&nums[i]==nums[i-1])
             continue;
             while(j<k)
             {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else{
                
                ans.push_back(vector<int>{nums[i],nums[j],nums[k]});
                }
                j++;
                k--;
                if(j<k&&nums[j]==nums[j-1])
                {j++;
                }
                if(j<k&&nums[k]==nums[k+1])
                {
                    k--;
                }
             }
           }
              return ans;
    }
    };

             
           
           
                
                 
                 
                
    





                 
                

    

              
            
           
         
    


               
              
               
              
            
              

               
              


                   
                   


        
    


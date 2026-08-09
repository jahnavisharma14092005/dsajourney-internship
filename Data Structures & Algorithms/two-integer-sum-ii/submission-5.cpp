class Solution
{
  public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        

        
        
        for(int i=0;i<numbers.size();i++)
       {    int start=i; 
            int end=target-numbers[start];
             int mid=start+(end-start)/2;
             while(end>=start)
             {
                if(numbers[mid]<end)
               {
                  start=mid+1;
                }
                 if(numbers[mid]>end)
               {
                    end=mid-1;
               }
                    else
                {
                     return{start+1,mid+1};
                }
             }
       }
       return {};
                     
               
                        
               
             
    }
         
          
      
    
};




      
               





       
        
    
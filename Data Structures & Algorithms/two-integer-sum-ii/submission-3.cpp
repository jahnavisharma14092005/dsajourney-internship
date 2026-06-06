class Solution
{
  public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        
        int start=0,end=numbers.size()-1;
        {
           while(end>start) {
             int cursum=numbers[start]+numbers[end];
             if(cursum<target)
             {
                start++;
             }
              else if(cursum>target)
               {
                end--;
               } 
               else
              {
              return {start+1,end+1};
               }
            
            
            }
        
          return{};
        }
    }
};
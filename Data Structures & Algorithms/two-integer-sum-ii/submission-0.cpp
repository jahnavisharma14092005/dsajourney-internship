class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i=0,j;
    
        for(int j=1;j<numbers.size();j++)
        {
               if(numbers[i]+numbers[j]>target)
               {
                j--;
               }
              
        
        }
        
        return{i+1,j+1};
    }
};

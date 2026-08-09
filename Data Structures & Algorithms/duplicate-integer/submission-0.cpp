class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
             for(int i=0;i<nums.size();i++) {
                 int j=i+1;
                 while(j<nums.size())
                 {
                    if(nums[i]==nums[j])
                        return true;
                    j++;
                 }
             }
             return false;
    }

};
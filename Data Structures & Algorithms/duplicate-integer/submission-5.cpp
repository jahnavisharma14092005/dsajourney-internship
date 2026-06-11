class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
             unordered_set<int>st;
             for(int i=0;i<nums.size();i++)
             {
                if(st.find(nums[i])!= st.end())
                { 
                    return true;
                }
                st.insert(nums[i]);
                
             }
             return false;
    }

};

# 1. OPTIMIZED APPROACH
2. st.end() points towards one position after last element.
    3. CONCEPT- hash set stores oonly unique elements.
                 so if u find a number not already present in the set then insert it.
                 if element is already present that means u found duplicate ..so acc to if condition..the if 
                  condition becomes true nd it returns true nd function ends.

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxwater=0;
        int currwater;
        int ht;
        while(right>left)
        {
            int width=right-left;
            ht=min(heights[right],heights[left]);
            currwater=width*ht;
            maxwater=max(maxwater,currwater);
        
         if(heights[left]<heights[right])
         {
            left++;

         }
         else{
            right--;
         }
        }
     return maxwater;
    }
};

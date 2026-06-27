class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
           
           while(stones.size()>1)
           { sort(stones.begin(),stones.end());
            int x=stones.back();
              stones.pop_back();
              int y=stones.back();
              stones.pop_back();
              if(x!=y)
              {
                  stones.push_back(x-y);


              }
           }

           return stones.empty() ? 0:stones[0];
    }
};

#FUNCTIONS IN VECTOR
v.push_back(x);    // Insert at end

v.pop_back();      // Remove last element

v.erase(...);      // Remove any element

v.size();          // Number of elements

v.empty();         // Is vector empty?

v.front();         // First element

v.back();          // Last element

v.clear();         // Remove all elements




           

           












        
        
    


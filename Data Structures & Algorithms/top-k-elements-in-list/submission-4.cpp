class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++)
            freq[i]++;

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        for(auto &p : freq){

            pq.push({p.second,p.first});

            if(pq.size() > k)
                pq.pop();
        }

        
        vector<int> ans;

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
   # UNORDEREDMAP- USED TO COUNT FREQUENCY.
   #MINHEAP- BECAUSE The smallest frequency among the current Top K should be easy to remove
              MIN HEAP KEEPS SMALLEST AT THE TOP ND ALLOWS IT TO POP IN  O(1)
              as soon as the size of heap is greater than k,we pop smallest element as we want top k element.


   #unordered map- always stores in pairs. <pair,pair> or <int,char> or < int,int>- (key,value) is the format.
                  unordered_map<int,int> mp;
                      mp[10] = 20;
                for(auto p : mp)
              p.first=10;
              p.second=20;
   # we have to take <pair,pair> in this ques because i thought maybe we can take int,int but no here we want take in pair
      the p is like for example(1,3) its a pair not an int. 
          
          # suppose a number 3 has freq 1
            bucket[p.second].push_back(p.first);
                 bucket[3].push_back(1);
                    bucket[3] = [1]
                         SO A BUCKET FORMS THIS WAY
                            bucket[0] = []
                            bucket[1] = [3]
                            bucket[2] = [2]
                            bucket[3] = [1]
                  
 ***HASMAP+SORTING BETTER 
 *** HEASHMAPS+HEAP MORE BETTER
*** BUCKET SORT OPTIMAL.  

          KEYPATTERN- Frequency
                      Maximum frequency <= n
                        Need ordering by frequency   THINK OF BUCKET SORT
                  
    


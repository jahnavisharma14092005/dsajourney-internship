class Solution 
{
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
                priority_queue<int,vector<int>,greater<int>>pq;
                for(int x:nums)
                {
                    pq.push(x);
                    if(pq.size()>k)
                    pq.pop();
                }
                  return pq.top();

                 
    }
};

Top K Largest
↓
Use Min Heap
↓
Keep size = k
↓
top() = kth largest  like suppose its [2,5,6,3,7,9]
            we push 2 in queue then 5..then at 6 size is >2 so we remove the smaller element 
that is 2 and make its [5,6].
    1. DOUBT WAS THAT HOW CODE KNOWS THAT PQ.POP() REMOVES SMALLEST. ITS BECAUSE  pq.pop() removes element at top always nd pq.top() has smallest element as its min heap

                    



                   




                      









                   




        
    


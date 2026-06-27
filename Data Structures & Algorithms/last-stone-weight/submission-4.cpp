class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
                priority_queue<int>pq;
                {
                    for(int i=0;i<stones.size();i++)
                    {
                        int x=stones[i];
                           pq.push(x);

                    }
                    while(pq.size()>1)
                    {
                        int a=pq.top();
                        pq.pop();
                        int b=pq.top();
                        pq.pop();
                             
                             
                                
                                pq.push(a-b);
                             


                             


                    }

                }

                
             return pq.top();



        
        
    }
};

#STANDARD WAY TO CREATE MAX HEAP
priority_queue<int> pq;

for(int x : stones)
    pq.push(x);

#MISTAKES-
1. did if(a!=b)
{
int y=a-b;
pq.push(y);
}


2. HEAP HAS FUNCTIONS LIKE
    pq.push(x);        // Insert

pq.pop();          // Remove top element

pq.top();          // Access top element

pq.size();         // Number of elements

pq.empty();        // Check if empty


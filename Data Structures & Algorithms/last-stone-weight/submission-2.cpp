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
                             if(a!=b)
                             {
                                int y=(a-b);
                                pq.push(y);
                             }


                             


                    }

                }

                
             return pq.top();



        
        
    }
};

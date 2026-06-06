class MinStack 
{ stack<int>st;
   stack<int>mstack;
    public:
    MinStack() 
    {
        
    }
    
    void push(int val) 
    { st.push(val);
        if(mstack.empty() || mstack.top()>=val)
        {
            mstack.push(val);
        }
        
    }
    
    void pop() 
    {
        if(st.empty())
        {
            return;
        }
         
        
             
          if(st.top()==mstack.top())
        {
            mstack.pop();
        }
          st.pop();
    }
    
    int top() 
    {
        return st.top();
    }
    
    int getMin() 
    {
       return mstack.top();
           
    }
    
};

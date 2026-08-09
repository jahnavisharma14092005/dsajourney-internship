class Solution 
{
   public:
    int evalRPN(vector<string>& tokens) 
    {             stack<int>st;
                 for(int i=0;i<tokens.size();i++)
            {      int a;
               int b; 
               
               int res;  
               
               if(tokens[i]=="+" || tokens[i]==" - "|| tokens[i]=="/" || tokens[i]=="*")
                {    
                  a=st.top(); st.pop();
                  b=st.top(); st.pop();
                 if(tokens[i]=="+")
                
                    res=b + a;
                
                  else if(tokens[i]=="*")
                
                    res=b * a;
                
                  else if(tokens[i]=="/")
                
                    res=b / a;
                
                  else if(tokens[i]=="-")
                
                    res=b - a;
                    st.push(res);
                
                  
                }
            
              
                   else
                {
                   st.push(stoi(tokens[i]));

             
                }
            }

        
           return st.top();

         

    }
};

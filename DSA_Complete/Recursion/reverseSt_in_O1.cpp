 void insert(stack<int> &st, int temp)
    {
        if(st.empty())
        {
            st.push(temp);
            return;
        }
        
        int val =  st.top();
        st.pop();
        insert(st,temp);
        st.push(val);
        return;
    }
    void revSt(stack<int> &st)
    {
      if(st.size()==1) return;
      int temp=st.top();
      st.pop();
      revSt(st);
      
      insert(st,temp);
      return;
    }
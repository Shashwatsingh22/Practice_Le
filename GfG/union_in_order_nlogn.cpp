int Search(vector <int> v,int key)
    {
      for(int i=0;i<v.size();i++)
      {
          if(v[i]==key)
          {
              return 1;
          }
      }
      return 0;
    }
    
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        vector <int> v;
      
        for(int i=0;i<n;i++)
        {
          if(Search(v,a[i]) )
          {
              continue;
          }
          else
          {
          v.push_back(a[i]);
          }
        }
        
        for(int j=0;j<m;j++)
        {
           if(Search(v,b[j]))
           {
               continue;
           }
           else
           {
               v.push_back(b[j]);
           }
        }
        
    
    return v.size();    
    }
    
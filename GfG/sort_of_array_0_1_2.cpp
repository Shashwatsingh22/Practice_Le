class Solution
{
    public:
    void sort012(int A[], int n)
    {
        int count_0=0;
        int count_1=0;
        int count_2=0;
        
        for(int i=0;i<n;i++)
        {
            if(A[i]==0)
            {
              count_0++;
            }
            if(A[i]==1)
            {
              count_1++;
            }
            if(A[i]==2)
            {
              count_2++;
            }
        }
        int i=0;
        while(count_0)
        {
            A[i]=0;
            i++;
            count_0--;
        }
        while(count_1)
        {
            A[i]=1;
            i++;
            count_1--;
        }
        while(count_2)
        {
            A[i]=2;
            i++;
            count_2--;
        }
        
    }
    
};
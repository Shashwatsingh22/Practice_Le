int circularSubarraySum(int arr[], int num){
    
    int size=2*num;    
    int A[size]={0};
    
    for(int i=0;i<num;i++)
    {
        A[i]=arr[i];
    }
    
    int j=num;
    
    for(int i=0;i<num;i++)
    {
        A[num++]=arr[i];
    }
    

    
    int f=0;
    int l=num;
    
    int max=INT_MIN;
    
    int itr=num-1;
    while(itr--)
    {
        for(int i=f++;i<l++;i++)
        {
            int sum=0;
            sum+=A[i];
            if(sum<0)
            {
               sum=0;
            }
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    
    return max;
    }
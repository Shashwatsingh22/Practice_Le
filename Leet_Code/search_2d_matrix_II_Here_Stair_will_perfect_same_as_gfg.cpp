class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int key) {
     
    int col=A[0].size();
    int row=A.size();
    int i=0,j=col-1;
     
    while(i<row && j>=0)
    {
       if(A[i][j]==key)
       {
         return 1;  
       }
        else if(A[i][j]>key)
         {
            j--;
         }
        else
        {
           i++;
        }
    }
	
	
	
    
	return 0;
}
};
void Solution::setZeroes(vector<vector<int> > &A) 
{
    int m = A.size();
    if(m == 0) return;
    int n = A[0].size();
    if(n == 0) return;
    
    bool isFirstRowZero = false;
    bool isFirstColumnZero = false;
    
    for(int i=0; i<m; ++i)
    {
        if(A[i][0] == 0) isFirstColumnZero = true;
    }
    
    for(int i=0; i<n; ++i)
    {
        if(A[0][i] == 0) isFirstRowZero = true;
    }
    
    for(int i=1; i<m; ++i)
    {
        for(int j=1; j<n; ++j)
        {
            if(A[i][j] == 0)
            {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    
    
    for(int i=1; i<m; ++i)
    {
        for(int j=1; j<n; ++j)
        {
            if(A[i][0] == 0 || A[0][j] == 0)
            {
                A[i][j] = 0;
            }
        }
    }
    
    if(isFirstRowZero) for(int i=0; i<n; ++i) A[0][i] = 0;
    if(isFirstColumnZero) for(int i=0; i<m; ++i) A[i][0] = 0;
}


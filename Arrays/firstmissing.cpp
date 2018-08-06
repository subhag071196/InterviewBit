int Solution::firstMissingPositive(vector<int> &A) 
{
    for(int i=0; i<A.size(); ++i)
    {
        if(A[i] <= A.size() && A[i] > 0)
        {
            if(A[A[i]-1] != A[i])
            {
                swap(A[i],A[A[i]-1]); 
                i--;
            }
        }
    }
    for(int i=0; i<A.size(); ++i)
    {
        if(A[i] != i+1)
        {
            return i+1;
        }
    }
    return A.size()+1;
}


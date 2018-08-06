vector<int> Solution::wave(vector<int> &A) 
{
    sort(A.begin(),A.end());
    for(int i=1; i<A.size(); i+=2)
    {
        if(A[i] > A[i-1])
        {
            int tmp = A[i];
            A[i] = A[i-1];
            A[i-1] = tmp;
        }
        if(i+1 < A.size() && A[i] > A[i+1])
        {
            int tmp = A[i];
            A[i] = A[i-1];
            A[i-1] = tmp;
        }
    }
    return A;
}


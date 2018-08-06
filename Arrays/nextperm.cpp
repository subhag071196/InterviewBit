void Solution::nextPermutation(vector<int> &A) 
{
    int n=A.size();
    int idx = -1;
    for(idx = n-2; idx >= 0; --idx) //1.determine the 1st position (i)
    {
        if(A[idx] < A[idx+1]) break;
    }
    
    if(idx == -1)   //2.if not found, sort entire array!
    {
        sort(A.begin(),A.end());
        return;
    }
    int i = idx;
    int j;
    for(j = A.size()-1; j>i; --j)   //3.else find proper value for ith position. 
    {
        if(A[j] > A[i]) break;
    }
    swap(A[i],A[j]);    //4.sort the trailing array!
    sort(A.begin()+i+1,A.end());
}

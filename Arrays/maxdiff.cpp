int Solution::maxArr(vector<int> &A) 
{
    vector<int> va;
    vector<int> vs;
    
    int mxva,mnva,mxvs,mnvs;
    
    mxva = INT_MIN;
    mnva = INT_MAX;
    mxvs = INT_MIN;
    mnvs = INT_MAX;
    
    for(int i=0; i<A.size(); ++i)
    {
        va.push_back(A[i]+i);
        vs.push_back(A[i]-i);
        
        mxva = max(mxva,A[i]+i);
        mnva = min(mnva,A[i]+i);
        mxvs = max(mxvs,A[i]-i);
        mnvs = min(mnvs,A[i]-i);
    }
    
    int c1 = mxva-mnva;
    int c2 = mxvs-mnvs;
    
    return max(c1,c2);
}


vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    long long S=0,SS=0,T,N,P,i;
    N = A.size();
    
    for(i=0; i<N; ++i)
    {
        long long a = A[i];
        S += a;
        SS += a*a;
    }
    T = S - (N*(N+1))/2;
    P = SS - (N*(N+1)*(2*N+1))/6;
    int x = (P/T - T)/2;
    int y = (P/T + T)/2;
    vector<int> ans;
    ans.push_back(y);
    ans.push_back(x);
    return ans;
}

int Solution::repeatedNumber(const vector<int> &A) 
{
    int c1=INT_MAX;
    int c2= INT_MAX;
    int cnt1=0,cnt2=0;
    for(int i=0; i<A.size(); ++i)
    {
        if(A[i] == c1)
        {
            cnt1++;
        }
        else if(A[i] == c2)
        {
            cnt2++;
        }
        else if(cnt1 == 0)
        {
            c1 = A[i];
            cnt1 = 1;
        }
        else if(cnt2 == 0)
        {
            c2 = A[i];
            cnt2 = 1;
        }
        else 
        {
            cnt1--;
            cnt2--;
        }
    }
    
    cnt1 = 0;
    cnt2 = 0;
    
    for(int i=0; i<A.size(); ++i)
    {
        if(A[i] == c1) cnt1++;
        else if(A[i] == c2) cnt2++;
    }
    if(cnt1 > A.size()/3) return c1;
    if(cnt2 > A.size()/3) return c2;
    return -1;
}

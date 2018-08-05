int Solution::repeatedNumber(const vector<int> &A) 
{
    int slo = 0;
    int fast = 0;
    int n = A.size();
    while(slo != fast || slo == 0)
    {
        if(slo >= n) return -1;
        slo = A[slo];
        if(fast >= n || A[fast] >= n) return -1;
        fast = A[A[fast]];
    }
    
    int start = 0;
    while(start != slo)
    {
        slo = A[slo];
        start = A[start];
    }
    return slo;
}


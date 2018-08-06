int Solution::maxSubArray(const vector<int> &A) 
{
    int j=0;
    int maxsum = INT_MIN;
    int currsum = 0;
    while(j<A.size())
    {
        currsum += A[j];
        maxsum = max(maxsum,currsum);
        if(currsum < 0) currsum = 0;
        j++;
    }
    return maxsum;
}


vector<int> Solution::maxset(vector<int> &A) 
{
    long long maxsum = 0;
    long long sum = 0;
    int len = 0;
    int best_len = 0;
    int j = 0;
    int n = A.size();
    int end = -1;
    bool isneg = false;
    while(j<n)
    {
        if(A[j] >= 0)
        {
            len++;
            sum += A[j];
            if(sum > maxsum)
            {
                maxsum = sum;
                best_len = len;
                end = j;
            }
            else if(sum == maxsum && len > best_len)
            {
                best_len = len;
                end = j;
            }
        }
        else
        {
            isneg = true;
            len = 0;
            sum = 0;
        }
        j++;
    }
    
    if(!isneg) return A;
    
    vector<int> ans;
    for(int i=end-best_len+1; i<=end; ++i)
    {
        ans.push_back(A[i]);
    }
    return ans;
}


vector<int> Solution::getRow(int A) 
{
    vector<int> sol;
    sol.push_back(1);
    int cnt = 1;
    while(cnt <= A)
    {
        for(int i=sol.size()-1; i>=0; --i) sol[i] += sol[i-1];
        sol.push_back(1);
        cnt++;
    }
    return sol;
}


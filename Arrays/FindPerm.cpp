vector<int> Solution::findPerm(const string A, int B) 
{
    int D = B;
    int I = 1;
    vector<int> ans;
    for(int i=0; i<A.size(); ++i)
    {
        if(A[i] == 'I') ans.push_back(I++);
        else ans.push_back(D--);
    }
    ans.push_back(I);
    return ans;
}


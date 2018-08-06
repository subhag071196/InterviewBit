vector<int> Solution::flip(string A) 
{
    vector<int> oz;
    for(int i=0; i<A.size(); ++i)
    {
        if(A[i] == '0')
        {
            oz.push_back(1);
        }
        else oz.push_back(-1);
    }
    
    int msf=0,meh=0;
    int l,best_l=INT_MAX,best_r=0;
    l=0;
    for(int i=0; i<A.size(); ++i)
    {
        meh += oz[i];
        
        if(meh < 0)
        {
            l = i+1;
            meh = 0;
        }
        if(msf < meh)
        {
            best_l = l;
            best_r = i;
            msf = meh;
        }
        
    }
    vector<int> ans;
    if(best_l <= best_r) 
    {
        ans.push_back(best_l+1);
        ans.push_back(best_r+1);
    }
    return ans;
}


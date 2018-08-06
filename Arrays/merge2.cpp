
 bool cmp(Interval a1, Interval a2)
 {
     return (a1.start <= a2.start);
 }
 
vector<Interval> Solution::merge(vector<Interval> &A) 
{
        vector<Interval> ans;
        sort(A.begin(),A.end(),cmp);
        for(int i=0; i<A.size(); ++i)
        {
            if(i+1 < A.size() && A[i].end >= A[i+1].start)
            {
                A[i+1].start = A[i].start;
                A[i+1].end = max(A[i].end,A[i+1].end);
            }
            else
            {
                ans.push_back(A[i]);
            }
        }
        return ans;
}


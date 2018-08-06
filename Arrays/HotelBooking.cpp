bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int c = 0,i=0,j=0;
    while(i<arrive.size() && j<depart.size())
    {
        if(arrive[i] < depart[j])
        {
            i++;
            c++;
        }
        else
        {
            j++;
            c--;
        }
        if(c>K) return 0;
    }
    return 1;
}

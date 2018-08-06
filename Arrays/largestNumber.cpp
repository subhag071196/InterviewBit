bool cmp(string s1,string s2)
{
    return s1+s2 > s2+s1;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> v;
    for(int i=0; i<A.size(); ++i) v.push_back(to_string(A[i]));
    sort(v.begin(),v.end(),cmp);
    string ans = "";
    for(int i=0; i<A.size(); ++i)
    {
        ans += v[i];
    }
    int i=0;
    while(i<A.size() && ans[i] == '0') i++;
    if(i == A.size()) return "0";
    return ans.substr(i);
}


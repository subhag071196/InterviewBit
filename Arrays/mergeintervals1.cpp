/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool cmp(Interval a1, Interval a2)
 {
     return a1.start < a2.start;
 }
 
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) 
{
    bool found = false;
    int x = newInterval.start;
    int y = newInterval.end;
    
    if(x > y) swap(newInterval.start,newInterval.end);
    
    for(int i=0; i<intervals.size(); ++i)
    {
        int x1 = intervals[i].start;
        int y1 = intervals[i].end;
        int x2 = newInterval.start;
        int y2 = newInterval.end;
        
        if(x2 > y1 || x1 > y2) continue;
        else
        {
            intervals[i].start = min(x1,x2);
            intervals[i].end = max(y1,y2);
            found = true;
            break;
        }
    }
    
    
    
    if(!found)
    {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end(),cmp);
        return intervals;
    }
    
    vector<Interval> ans;
    
    for(int i=0; i<intervals.size()-1; ++i)
    {
        int x1 = intervals[i].start;
        int y1 = intervals[i].end;
        int x2 = intervals[i+1].start;
        int y2 = intervals[i+1].end;
        
        if(x1 > y2 || x2 > y1)
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            intervals[i+1].start = min(x1,x2);
            intervals[i+1].end = max(y1,y2);
        }
    }
    ans.push_back(intervals[intervals.size()-1]);
    return ans;
}


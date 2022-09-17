class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
        vector<vector<int>> res;
        
        sort(intervals.begin(),intervals.end());
       
        for(int i = 0; i < intervals.size(); i++)
        {
            if(res.empty() || res.back()[1] < intervals[i][0])
            {
                vector<int> add = {
                    intervals[i][0],
                    intervals[i][1]
                };
                res.push_back(add);
            }
            else
                
            res.back()[1] = max(res.back()[1], intervals[i][1]);
        }
        return res;
   
    }
};
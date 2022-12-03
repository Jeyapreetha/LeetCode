class Solution {
public:
    static bool cmp(const pair<char, int>& a, const pair<char, int>& b)
    {
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
        string res = "";
        
        unordered_map<char,int> m;
        
        for(auto i:s)
            m[i]++;
        
        vector<pair<int,int>> mapValues;
        for(auto i:m)
            mapValues.push_back({i.first,i.second});
        
        sort(mapValues.begin(),mapValues.end(),cmp);
        
        
        for(auto i:mapValues)
            cout << i.first << " " << i.second << endl;
        
      
        for(auto i : mapValues)
        {
            int val = i.second;
            while(val)
            {
                res += i.first;
                val--;
            }
        }
        return res;
    }
};
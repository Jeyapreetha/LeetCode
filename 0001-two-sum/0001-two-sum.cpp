class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        unordered_map<int,int> m;
        for(int i = 0 ; i <  nums.size() ; i++)
        {
            int num2 = target - nums[i];
            if(m.find(num2) != m.end())
            {
                res.push_back(i);
                res.push_back(m.at(num2));
                return res;
            }
            else
                m.insert({nums[i],i});
        }
        return res;
    }
};


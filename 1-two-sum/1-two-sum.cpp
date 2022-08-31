class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
        {
           int num2 = target - nums[i];

            if(m.find(num2) == m.end())
                m.insert({nums[i],i});
                
            else
            {
               res.push_back(i); 
               res.push_back(m.at(num2));
               return res;
            }
        }
        return res;
    }
};
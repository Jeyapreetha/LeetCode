class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int subArrayCount = 0;
        int n = nums.size();
        
        unordered_map<int,int> m;
        
        int prefix[n];
        prefix[0] = nums[0];
        
        for(int i = 1; i < nums.size(); i++)
            prefix[i] = prefix[i-1]+nums[i];
        
        for(int i = 0; i < n; i++)
        {
            
            if(prefix[i] == k) 
                subArrayCount++;
            
            if(m.find(prefix[i]-k) != m.end())
                
                subArrayCount += m[prefix[i]-k];
                
            m[prefix[i]]++;    
        }
        
        return subArrayCount;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int low =INT_MAX ,maxS = 0;
        
        for(int i = 0; i < prices.size(); i++)
        {
           low =  min(low,prices[i]);
            maxS = max(maxS, prices[i] - low);
        }
       
      
        
        return maxS;
    }
};
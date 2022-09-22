class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        

        int suml = 0 , sum = 0;
        
        for(int i = 1; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        //sum of whole array except index 0
        
        // starting from index 0 comparing both left and right sum
        for(int j = 0; j < nums.size() ; j++)
        {
            if(sum == suml)
                return j;
            if(j < nums.size() - 1)
                sum -= nums[j+1];
            suml += nums[j];
        }
        return -1;
    }
    
};
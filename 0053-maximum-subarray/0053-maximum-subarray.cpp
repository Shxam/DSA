class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int sum=0;
        for(auto num:nums)
        {
            sum+=num;
            if(sum>max_sum)
            {
                max_sum=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return max_sum;
        
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0,candidate=-1;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                candidate=nums[i];
                count=1;
            
            }
            else{
                count+=(nums[i]==candidate)?1:-1;
            }
        }
        //verify the candidate
        count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==candidate)
            {
                count++;
            }
        }
        return (count>n/2)?candidate:-1;
    }
};
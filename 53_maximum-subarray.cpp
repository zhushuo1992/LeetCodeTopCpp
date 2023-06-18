class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ret = INT_MIN, temp = 0;
        for(int i=0; i<nums.size();i++)
        {
            temp += nums[i];
            if(temp > ret)
            {
                ret = temp;
            }
            if(temp<0)
            {
                temp=0;
            }
        }

        return ret;
    }
};
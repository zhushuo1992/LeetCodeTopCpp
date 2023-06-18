class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;

        if(nums.size()<3) return ret;
        sort(nums.begin(), nums.end());

        if(nums[0] > 0) return ret;

        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i] > 0)
            {
                return ret;
            }
            int l = i+1, r = nums.size()-1;

            while(l<r)
            {
                if(nums[i] + nums[l] + nums[r] == 0)
                {
                    ret.push_back({nums[i], nums[l], nums[r]});

                    while(l<r && nums[l] == nums[l+1])
                    {
                        l++;
                    }
                    while(l<r && nums[r] == nums[r-1] )
                    {
                        r--;
                    }
                    l++;
                    r--;
                }
                else if(nums[i] + nums[l] + nums[r] < 0)
                {
                    l++;
                }
                else
                {
                    r--;
                }

            }



            while(nums[i] == nums[i+1] && i < nums.size()  -2)
            {
                i++;
            }
        }

        return ret;
    }
};
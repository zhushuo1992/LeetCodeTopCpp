class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret(2);
        unordered_map<int, int> tmp_map;
        for(int i = 0; i< nums.size(); i++)
        {
            tmp_map[nums[i]] += 1;
        }

        unordered_map<int, int> tmp_map2;
        for(int i = 0; i< nums.size(); i++)
        {
            tmp_map2[nums[i]] = i;
        }

        for(int i = 0; i< nums.size(); i++)
        {
            if(tmp_map.find(target - nums[i]) != tmp_map.end())
            {
                if(target -nums[i] != nums[i])
                {
                    ret[0] = i;
                    ret[1] = tmp_map2[target- nums[i]];
                    return ret;
                }
                else if (tmp_map[nums[i]] > 1)
                {
                    ret[0] = i;
                    for(int j=0; j<nums.size();j++)
                    {
                        if(nums[j] == nums[i] && j!= i)
                        {
                            ret[1] = j;
                        }
                    }
                    return ret;
                }

            }
        }

        return ret;

    }
};
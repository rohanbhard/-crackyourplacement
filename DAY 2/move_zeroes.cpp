class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0, cnt = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[j] = nums[i];
                j++;
            }
            else
                cnt++;
        }
        for(int i = 1; i<=cnt; i++)
            nums[nums.size()-1-cnt+i] = 0;
    }
};
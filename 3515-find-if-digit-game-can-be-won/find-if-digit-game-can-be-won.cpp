class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int cnt1= 0;
        int cnt2 = 0;
        for(int i = 0; i<n ; i++)
        {
            if( nums[i] < 10)
            {
                cnt1 += nums[i];
            }
            else
            {
                cnt2 += nums[i];
            }
        }
        if(cnt1 == cnt2)
        {
            return false;
        }
        return true;
    }
};
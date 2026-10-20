class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int i,j,n;
        int cnt = 0;
        int ans = 0;
        n = nums.size();
        if(n == 1)
        {
            return 0;
        }
        i = 0;
        j = 1;
        while(j<n && i<n)
        {
            /*if(i == j)
            {
                j++;
                cnt = 0;
            }*/
            if(nums[i] != nums[j])
            {
                i = i + cnt + 1;
                cnt = 0;
            }
            else
            {
                cnt++;
                ans++;
            }
            j++;
        }
        return ans;
    }
};
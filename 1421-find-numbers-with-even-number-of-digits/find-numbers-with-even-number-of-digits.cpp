class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans= 0;
        int cnt = 0;
        for(int i = 0; i<n ;i++)
        {
            cnt = 0;
            int x = nums[i];
            while(x > 0)
            {
                cnt++;
                x = x/10;
            }
            if(cnt %2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
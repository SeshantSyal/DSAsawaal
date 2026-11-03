class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int x = nums[n-1];
        int ans = 0;
        for(int i = 0; i<n ; i++)
        {
            int diff = 0;
            diff = x - nums[i];
            ans += diff;
        }
        return ans;
    }
};
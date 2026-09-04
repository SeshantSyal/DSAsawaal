class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maxe(n);
        vector<int> mine(n);
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int check;
        for(int i = 0; i<n ; i++)
        {
            maxi = max(nums[i] , maxi);
            mini = min(nums[n-1-i] , mini);
            maxe[i] = maxi;
            mine[n-1-i] = mini;
        }
        for(int j = 0; j<n ; j++)
        {
            check = maxe[j] - mine[j];
            if(check<= k)
            {
                return j;
            }
        }
        return -1;
    }
};
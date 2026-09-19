class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        int n = queries.size();
        int m = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) 
        {
            int sum = 0;
            int count = 0;
            for(int j = 0; j < m; j++) 
            {
                sum += nums[j];
                if(sum > queries[i])
                {
                    break;
                }
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
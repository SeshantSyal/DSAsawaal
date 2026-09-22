class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int x : nums) 
        {
            string s = to_string(x);
            for (char c : s) 
            {
                ans.push_back(c - '0');
            }
        }
        return ans;
    }
};
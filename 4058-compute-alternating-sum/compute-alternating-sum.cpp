class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = 0;
        int check = 1;
        for(int i = 0; i< nums.size(); i++)
        {
            if(i%2!= 0)
            {
                check = -1;
            }
            else
            {
                check = 1;
            }
            sum += nums[i] * check;
        }
        return sum;
    }
};
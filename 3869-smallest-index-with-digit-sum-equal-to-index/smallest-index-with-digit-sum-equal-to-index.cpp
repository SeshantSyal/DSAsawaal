class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i<nums.size() ; i++)
        {
            int x = nums[i];
            int temp = 0;
            while(x>0)
            {
                temp += x%10;
                x = x/10;
            } 
            if(temp == i)
            {
                return i;
            }
        }
        return -1;
    }
};
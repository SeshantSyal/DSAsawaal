class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd,even;
        odd = 0;
        int n = nums1.size();
           for(int i = 0; i< nums1.size(); i++)
           {
                if(nums1[i] % 2 != 0)
                {
                    odd++;
                }
                else if(nums1[i] %2 == 0)
                {
                    even++;
                }
           }
           return true;
    }
};
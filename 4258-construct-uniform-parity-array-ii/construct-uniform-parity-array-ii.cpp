class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int seven,sodd,odd,even;
        odd = 0;
        even = 0;
        seven = INT_MAX;
        sodd = INT_MAX;
        for(int i = 0; i<n ; i++)
        {
            if(nums1[i] % 2 != 0)
            {
                odd++;
                sodd= min(sodd, nums1[i]);
            }
            else if(nums1[i] % 2 == 0)
            {
                even++;
                seven = min(seven, nums1[i]);
            }
        }
        if(odd == n || even == n)
        {
            return true;
        }
        else
        {
            if(seven > sodd)
            {
                return true;
            }
        }
        return false;
    }
};
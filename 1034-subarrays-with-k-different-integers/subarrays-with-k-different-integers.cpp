class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int a = realans(nums, k);
        int b = realans(nums, k - 1);
        return a - b;
    }
    int realans(vector<int>& nums, int k)
    {
        if(k==0 || k == -1)
        {
            return 0;
        }
        map <int,int> mp;
        int l=0;
        int r = 0;
        int n = nums.size();
        int cnt = 0;
        mp[nums[0]] = 1;
        while(l<=r && r<n)
        {
            while(mp.size() <= k)
            {
                cnt += r-l+1;
                cout<< cnt << "\n";
                r++;
                if(r>=n)
                {
                    break;
                }
                mp[nums[r]]++;
            }
            mp[nums[l]]--;
            if(mp[nums[l]] == 0)
            {
                mp.erase(nums[l]);
            }
            l++;
        }
        return cnt;
    }
};
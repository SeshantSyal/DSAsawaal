class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        int temp;
        int n = s.size();
        for(int i  =0; i<n ; i++)
        {
            temp =  26 - (s[i] - 'a');
            ans += temp * (i+1);
        }
        return ans;
    }
};
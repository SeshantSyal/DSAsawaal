class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> s;
        int m = stones.size();
        int n = jewels.size();
        int ans = 0;
        for(int i = 0 ; i<n ; i++)
        {
            s.insert(jewels[i]);
        }
        for(int j = 0; j<m ; j++)
        {
            if(s.find(stones[j]) != s.end())
            {
                ans++;
            }
        }
        return ans; 
    }
};
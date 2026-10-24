class Solution {
public:
    int minDays(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int score = 1; score <= n; score++) {
            for (int k = 1; k * (k + 1) / 2 <= score; k++) {
                int streakScore = k * (k + 1) / 2;
                if (dp[score - streakScore] != INT_MAX) {
                    if (score == streakScore) {
                        dp[score] = min(dp[score], k);
                    } 
                    else {
                        dp[score] = min(dp[score],
                                        dp[score - streakScore] + k + 1);
                    }
                }
            }
        }
        return dp[n];
    }
};
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for (string word : words) {
            string temp = "";
            for (char c : word) {
                if (c == separator) {
                    if (!temp.empty()) {
                        ans.push_back(temp);
                        temp = "";
                    }
                }
                else {
                    temp += c;
                }
            }
            if (!temp.empty()) {
                ans.push_back(temp);
            }
        }

        return ans;
    }
};
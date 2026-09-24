class Solution {
public:
    int alternateDigitSum(int n) {
        int temp = 0;
        int check = 0;
        string s = to_string(n);
        for(int j = 0 ; j<s.size(); j++)
        {
            check = s[j] - '0';
            if(j%2 != 0)
            {
                check = check * -1;
            }
            temp += check;
        }
        return temp;
    }
};
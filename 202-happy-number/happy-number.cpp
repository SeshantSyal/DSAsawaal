class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> saved;
        while(saved.find(n) == saved.end()) 
        {
            int temp, temp1;
            temp1 = 0;
            saved.insert(n);
            while(n>0)
            {
                temp = n % 10;
                temp1 += temp*temp;
                n = n/10;
            }
            if(temp1 == 1)
            {
                return true;
            }
            n = temp1;
        }
        return false;
    }
};
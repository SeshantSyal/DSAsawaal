class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        int min1,min2,max1,max2;
        max1= INT_MIN;
        max2 = INT_MIN;
        min1= INT_MAX;
        min2 = INT_MAX;
        for(int i = 0; i<4 ; i++)
        {
            int temp = s[i] - '0';
            if(temp >= max1 && max1 >= max2)
            {
                max2 = max1;
                max1 = temp;
            }
            else if(temp >= max2 && temp < max1)
            {
                max2 = temp;
            }  
            if(temp <= min1 && min1 <= min2)
            {
                min2 = min1;
                min1 = temp;
            }    
            else if(temp <= min2 && temp > min1)
            {
                min2 = temp;
            }
        }
        int ans;
        ans = (min1 * 10) + max1 + (min2 * 10) + max2;
        return ans;
    }
};
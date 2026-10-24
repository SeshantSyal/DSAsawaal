
class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
        int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
        int m = stoi(arriveAlice.substr(0,2));
        int d = stoi(arriveAlice.substr(3,2));
        for(int i = 0; i<m-1; i++)
        {
            a1 += days[i];
        } 
        a1 += d;
        m = stoi(leaveAlice.substr(0,2));
        d = stoi(leaveAlice.substr(3,2));
        for(int i = 0; i<m-1; i++)
        {
            a2 += days[i];
        }
        a2 += d;
        m = stoi(arriveBob.substr(0,2));
        d = stoi(arriveBob.substr(3,2));
        for(int i = 0;i <m-1; i++)
        {
            b1 += days[i];   
        }    
        b1 += d;
        m = stoi(leaveBob.substr(0,2));
        d = stoi(leaveBob.substr(3,2));
        for(int i = 0; i < m-1; i++)
        {
            b2 += days[i];
        }
        b2 += d;
        int st = max(a1 , b1);
        int en = min(a2 , b2);
        return max(0 , en-st+1);
    }
};

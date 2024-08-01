class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for (string info : details) {
            if (info[11] > '6' || (info[11] == '6' && info[12] > '0')) cnt++;
        } return cnt;
    }
};
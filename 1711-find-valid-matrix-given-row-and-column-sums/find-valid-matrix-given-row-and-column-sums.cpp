class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> res(rowSum.size(), vector<int> (colSum.size(), 0));
        for(int i = 0; i < rowSum.size(); i++) {
            for(int j = 0; j < colSum.size(); j++) {
                int mn = min(rowSum[i], colSum[j]);
                res[i][j] = mn;
                rowSum[i] -= mn; colSum[j] -= mn;
            }
        } return res;
    }
};
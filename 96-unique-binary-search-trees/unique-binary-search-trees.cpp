class Solution {
public:
    int numTrees(int n) {
        long long res = 1;
        for(int i = 1; i < n + 1; i++) res = (res * (4 * i - 2)) / (i + 1);
        return res;
    }
};
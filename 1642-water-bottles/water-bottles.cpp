class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = 0, total = 0;
        while(numBottles || empty >= numExchange) {
            if (numBottles) {empty += numBottles; total += numBottles; numBottles = 0;}
            else {
                numBottles += (empty / numExchange); 
                empty -= ((empty / numExchange) * (numExchange)); 
            }
            
        } return total;
    }
};
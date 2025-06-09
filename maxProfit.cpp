// 121. Best Time to Buy and Sell Stock
#include <iostream>
#include <vector>
#include <math.h>


int maxProfit(std::vector<int>& prices) {
    int buy = INFINITY;
    int profit = 0;
    int n = prices.size();

    for (int i = 0; i < n; i ++){
        profit = std::max(profit, prices.at(i) - buy);
        buy = std::min(buy, prices.at(i));
    }
    return profit;
    
}

int main(){
    std::vector<int> vec = {7, 1, 5, 3, 6, 4};
    std::cout << maxProfit(vec);
}
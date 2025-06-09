// 122. Best Time to Buy and Sell Stock II
#include <iostream>
#include <vector>
#include <math.h>


int maxProfit(std::vector<int>& prices) {
    int profit = 0;
    int n = prices.size();

    for (int i = 1; i < n; i ++){
        int var = prices.at(i) - prices.at(i - 1);
        if (var > 0){
            profit += var;
        }
    }
    return profit;
}

int main(){
    std::vector<int> vec = {7,6,4,3,1};
    std::cout << maxProfit(vec);
}
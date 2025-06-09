// 875. Koko Eating Bananas
#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <map>
#include <set>

// basically we need to figure out the minimum amount of k bananas per hour to eat all of the bananas in less than h hours.
// we return k
int minEatingSpeed(std::vector<int>& piles, int h) {
    std::sort(piles.begin(), piles.end());
    int low = 0;
    int high = piles.size() - 1;
    while (low <= high){

    }
    std::vector<int> trial =  {4, 10, 23, 25};

}

int main(){
    std::vector<int> piles = {1, 4, 3, 2};
    int h = 9;
    std::cout << minEatingSpeed(piles, h);
}
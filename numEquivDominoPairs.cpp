// 1128. Number of Equivalent Domino Pairs

#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
#include <map>


int numEquivDominoPairs(std::vector<std::vector<int>>& dominoes) {
    std::map<std::pair<int, int>, int> mp;
    int count = 0;

    for (auto& domino : dominoes) {
        int a = std::min(domino[0], domino[1]);
        int b = std::max(domino[0], domino[1]);
        std::pair<int, int> key = {a, b};
        count += mp[key];  // for each previous matching domino, we form a new pair
        mp[key]++;
    }

    return count;
}

int main(){
    std::vector<std::vector<int>> vec = {{1,2},{2, 1},{3,4},{5,6}};
    std::vector<std::vector<int>> vec_two = {{1,2},{1,2},{1,1},{1,2},{2,2}};
    std::vector<std::vector<int>> vec_three = {{1,2}, {1,2}, {1,2}, {1,2}, {1,2}, {1,1}, {1,2}, {2,2}};
    std::cout << numEquivDominoPairs(vec) << '\n';
    std::cout << numEquivDominoPairs(vec_two) << '\n';
    std::cout << numEquivDominoPairs(vec_three);

}
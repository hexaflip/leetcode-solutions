//11. Container With Most Water

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <unordered_map>

int maxArea(std::vector<int>& height) {
    int max_water = 0;
    int first = 0;
    int last = height.size() - 1;
    while (first < last){
        int line_one = height.at(first), line_two = height.at(last);
        int total = std::min(line_two, line_one) * (last - first);
        max_water = std::max(total, max_water);
        if (line_one <= line_two){
            first++;
        } else{
            last--;
        }
    }
    return max_water;
}

int main(){
    std::vector<int> values = {1,7,2,5,4,7,3,6};
    std::cout << maxArea(values);
}
// 167. Two Sum II - Input Array Is Sorted

#include <vector>
#include <string>
#include <iostream>
#include <map>

std::vector<int> twoSum(std::vector<int>& numbers, int target) {
    int n = numbers.size();
    int pointer_one = 0;
    int pointer_two = n - 1;
    while (pointer_one < pointer_two){
        if (numbers.at(pointer_one) + numbers.at(pointer_two) == target){
            return {pointer_one + 1, pointer_two + 1};
        }
        if (numbers.at(pointer_one) + numbers.at(pointer_two) < target){
            pointer_one++;
        }
        if (numbers.at(pointer_one) + numbers.at(pointer_two) > target){
            pointer_two--;
        }
    }
    return {-1, -1};
}

// 15. 3Sum
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <unordered_map>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> vec;
    for (int i = 0; i < static_cast<int>(nums.size()); i++){
        if (nums.at(i) > 0){
            break;
        }
        if (i > 0 && nums.at(i) == nums.at(i - 1)){
            continue;
        }

        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right){
            int j = nums.at(left);
            int k = nums.at(right);
            int total = nums.at(i) + j + k;
            if (total == 0){
                vec.push_back({nums.at(i), j, k});
                left++;
                right--;
                while (nums.at(left) == nums.at(left - 1) && left < right){
                    left++;
                }

            }
            if (total < 0){
                left++;
            }
             if (total > 0){
                right--;
             }
        }
        
    }
    return vec;
}
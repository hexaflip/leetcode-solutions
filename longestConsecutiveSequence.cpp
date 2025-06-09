// 128. Longest Consecutive Sequence
#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <map>
#include <set>

int longestConsecutive(std::vector<int>& nums) {
    std::unordered_map<int, int> mp;
    int ret = 0;
    int count = 0;
    for (int j : nums){
        mp[j]++;
    }

    for (int i : nums){
        if (!mp[i - 1]){
            int copyCat = i;
            int count = 1;
            while (mp[copyCat+ 1]){
                count++;
                copyCat++;
            }

            ret = std::max(ret, count);
        }
    }
    return ret;
}
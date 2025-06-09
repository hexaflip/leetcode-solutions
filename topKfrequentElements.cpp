// 347. Top K Frequent Elements

#include <vector>
#include <string>
#include <iostream>
#include <map>


std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::map<int, int> mp;
    std::vector<int> rec;
    std::vector<std::pair<int, int>> vec;
    int n = nums.size();
    // O(n)
    for (int i : nums){
        mp[i]++;
    }

    // O (n)
    for (const auto& [key, value] : mp){
        vec.push_back({key, value});
    } 

    // O (n log n)
    std::sort(vec.begin(), vec.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second;
    });

    // O (k)

    for (int i = 0; i < k; i++){
        rec.push_back(vec.at(i).first);
    }

    return rec;

    //final runtime O(n log n)
}
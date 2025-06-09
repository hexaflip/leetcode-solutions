// 49. Group Anagrams
#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <map>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) {
    std::vector<std::vector<std::string>> ret;
    std::map<std::string, std::vector<std::string>> mp;
    for (auto string : strs){
        std::string copy = string;
        // O(n log n)
        std::sort(string.begin(), string.end());
        // O (log m), m = number of unique keys
        mp[string].push_back(copy);
    }
    // O(n)
    for (const auto& [key, value] : mp){
        ret.push_back(value);
    }
    return ret;
}
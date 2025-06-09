#include <string>
#include <unordered_map>
#include <iostream>



using namespace std;


int lengthOfLongestSubstring(string s){
    int n = static_cast<int>(s.size());
    // bound checking
    if (n == 0){
        return 0;
    }
    if (n < 2){
        return 1;
    }

    // actual algorithm

    int ret = 0;
    int pointer = 0;
    std::unordered_map<char, int> mp;

    for (int i = 0; i < n; i++){
        char curr = s.at(i);
        mp[curr]++;
        while (mp[curr] > 1){
            mp[s.at(pointer)]--;
            pointer++;
        }
        ret = std::max(ret, i - pointer + 1);
    }
    return ret;
}




int main(){
    std::string input;
    std::cin >> input;
    std::cout << lengthOfLongestSubstring(input);
}


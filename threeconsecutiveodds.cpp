#include <iostream>
#include <vector>

bool threeConsecutiveOdds(std::vector<int>& arr) {
    int count = 0;
    for (int i = 0; i < static_cast<int>(arr.size()); i++){
        if (arr.at(i) % 2 == 0){
            count = 0;
        } else{
            count++;
        }
        if (count >= 3){
            return true;
        }
    }
    return false;
}

int main(){
    std::vector<int> arr = {2, 6, 4, 1};
    bool meme1 = threeConsecutiveOdds(arr);
    std::cout << meme1 << " should be false!";

    std::vector<int> arr2 = {1,2,34,3,4,5,7,23,12};
    bool meme = threeConsecutiveOdds(arr2);
    std::cout << meme << " should be true!";
}



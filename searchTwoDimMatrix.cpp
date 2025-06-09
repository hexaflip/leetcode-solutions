// 74. Search a 2D Matrix

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <unordered_map>

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
    int m = matrix.at(0).size();
    int n = matrix.size();
    int low = 0;
    int high = n * m - 1;

    while (low <= high){
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        int current = matrix.at(row).at(col);

        if (current == target){
            return true;
        }
        if (current < target){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return false;
}
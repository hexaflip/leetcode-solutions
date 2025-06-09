// 62. Unique Paths

#include <iostream>
#include <math.h>
#include "algorithm"
#include <string>
#include <map>
#include <stack>
#define ll long long

int factorial (int n){
    ll meme = 1;

    for (int i = 2; i <= n; i++){
        meme = i * meme;
    }
    return meme;
}


int uniquePaths(int m, int n) {
    ll top = factorial(m + n - 2);
    ll bottom = factorial(n - 1);
    ll bottom_second = factorial(m -1);
    return top / (bottom * bottom_second);
}



int main(){
    std::cout << uniquePaths(10, 10);
}
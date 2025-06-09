#include <iostream>
#include <math.h>
#include "algorithm"
#include <string>

#define ll long long

bool isPalindrome(int x) {
    if (x < 0){
        return false;
    }
    int og = x;
    ll reverse_int = 0;
    int count = 0;
    while (x > 0){
        
        count++;
        reverse_int *= 10;
        int reverie = x % 10;
        x /= 10;
        reverse_int += reverie;
        std::cout << reverse_int << '\n';
        
    }
    
    return (reverse_int == og);
    
}


int main(){
    int x;
    std::cin >> x;
    bool test = isPalindrome(x);
    std::cout << test;
}
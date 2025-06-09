// 420. Strong Password Checker

#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <map>
#include <set>

int strongPasswordChecker(std::string password) {
    bool uppercase = false;
    bool lowercase = false;
    bool three_repeating = true;
    bool has_digit = false;
    int prev = 0;
    int count = 0;
    for (int ch : password){
        if (ch >= 65 && ch <= 90){
            uppercase = true;
        }
        else if (ch >= 97 && ch <= 122){
            lowercase = true;
        }
        else if (ch >= 48 && ch <= 57){
            has_digit = true;
        }
        if ( prev == ch ){
            count++;
        } else{
            count = 0;
        }
        if (count == 3){

        }
        // aaaaaa
        // we would have to change 3 characters
        // however, if we had aaabbb we would only have to change 

    }
    return 0;
}

int main(){
    strongPasswordChecker("ab");
}
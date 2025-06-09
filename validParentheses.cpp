// 20. Valid Parentheses

#include <iostream>
#include <math.h>
#include "algorithm"
#include <string>
#include <map>
#include <stack>


bool isValid(std::string s) {
    std::stack<char> st;

    std::map<char, int> mp = {{'(', 1}, {'{', 1}, {'[', 1}, {')', 2}, {']', 2}, {'}', 2}};
    for (char ch : s){
        if (mp[ch] == 2 && st.empty()){
            return false;
        }
        if (mp[ch] == 1){
            st.push(ch);
            continue;
        }
        if (ch == ')' && st.top() != '('){
            return false;
        }
        else if (ch == ']' && st.top() != '['){
            return false;
        }
        else if (ch == '}' && st.top() != '{'){
            return false;
        } else{
            st.pop();
        }
    }
    if (st.empty()){
        return true;
    }
    return false;
}


int main(){
    std::string thing;
    std::cin >> thing;
    bool real = isValid(thing);
    std::cout << real;
}
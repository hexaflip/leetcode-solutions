#include <iostream>
#include <math.h>
#include <stack>
#include <algorithm>
#include <unordered_map>

using namespace std;



int evalRPN(vector<string>& tokens) {
    std::unordered_map<string, bool> arithmetic_map = {
        {"*", true}, {"/", true},
        {"+", true}, {"-", true}
    };
    std::stack<std::string> st;
    int total = 0;
    for (int i = 0; i < static_cast<int>(tokens.size()); i++){
        if (arithmetic_map.find(tokens.at(i)) == arithmetic_map.end()){
            st.push(tokens.at(i));
        } else{
            int first = stoi(st.top());
            st.pop();
            int second = stoi(st.top());
            st.pop();
            if (tokens.at(i) == "+"){
                st.push(to_string(second + first));
            }
            if (tokens.at(i) == "-"){
                st.push(to_string(second - first));
            }
            if (tokens.at(i) == "*"){
                st.push(to_string(second * first));
            }
            if (tokens.at(i) == "/"){
                st.push(to_string(second / first));
            }
        }
    }
    return stoi(st.top());
}
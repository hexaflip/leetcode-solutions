// 155. Min Stack

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <unordered_map>
#include <climits>
class MinStack{
    public:
    std::vector<int> currentStack;
    std::vector<int> currentMinimum;
    int size = 0;
    MinStack(){

    }

    void push(int val){
        if (!currentMinimum.empty()){
            if (val < currentMinimum.at(size - 1)){
                currentMinimum.push_back(val);
            } else{
                currentMinimum.push_back(currentMinimum.at(size - 1));
            }
        } else{
            currentMinimum.push_back(val);
        }
        currentStack.push_back(val);
        size++;
    }

    void pop(){
        currentStack.pop_back();
        currentMinimum.pop_back();
        size--;

    }
    int top(){
        return currentStack.at(size - 1);
    }
    
    int getMin(){
        return currentMinimum.at(size - 1);
    }


};
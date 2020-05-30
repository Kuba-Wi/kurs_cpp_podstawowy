#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for(int i = 0; i < count; ++i) {
        vec.push_back(std::make_shared<int>(i));
    }

    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for(auto& ptr : vec) {
        std::cout << *ptr << " ";
    }
    std::cout << '\n';
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for(auto& ptr : vec) {
        if(ptr) {
            *ptr += 10;
        }
    }
}

void sub10(int * const number) {
    if(number) {
        *number -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for(auto& ptr : vec) {
        if(ptr) {
            sub10(ptr.get());
        }
    }
}
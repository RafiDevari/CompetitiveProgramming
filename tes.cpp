#include <iostream>

using namespace std;

int main(){
    #if __cplusplus == 202002L
        std::cout << "C++20" << std::endl;
    #elif __cplusplus == 201703L
        std::cout << "C++17" << std::endl;
    #else
        std::cout << "Pre-C++17" << std::endl;
    #endif
    return 0;
}
#include <iostream>

using namespace std;

size_t factorial(size_t n){
    size_t i{n};
    while(n > 1){
        i *= (n--);
    }
    return i;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << factorial(10) << endl;

    return 0;
}
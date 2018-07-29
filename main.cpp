#include <iostream>

using namespace std;

size_t factorial(size_t n){
    if (n == 1) return 1;
    else return n * factorial(n-1);
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << factorial(10) << endl;

    return 0;
}
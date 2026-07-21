#include <iostream>
int main() {
    int t, a, b, c;
    std::cin >> t;
    while(t--) {
        std::cin >> a >> b >> c;
        std::cout << (a + b + c + 1) / 3 << std::endl; 
    }
    return 0;
}
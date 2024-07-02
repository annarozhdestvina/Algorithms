#include <iostream>

void invert_base(int x, int base) {
    if (x > 0) {
        int digit = x % base;
        x /= base;
        invert_base(x, base);
        std::cout << digit;
    }
}

int main() {
    int base = 2;
    int x = 25;
    invert_base(x, base);

    return 0;
}
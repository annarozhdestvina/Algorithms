#include <iostream>
#include <array>

// 0 1 2 3 4 ->     left   1 2 3 4 0
void cycled_shift_left(std::array<int, 5> &a) {
    int tmp = a[0];
    for(int i = 0; i < a.size() - 1; ++i) {
        a[i] = a[i + 1];
    }
    a[a.size() - 1] = tmp;
}

// 0 1 2 3 4   <-    right   4 0 1 2 3
void cycled_shift_right(std::array<int, 5> &a) {
    int tmp = a[a.size() - 1];
    for(int i = a.size() - 1; i >= 0; --i) {
        a[i] = a[i - 1];
    }
    a[0] = tmp;
}

int main() {
    std::array<int, 5> a = {0,1,2,3,4};
    cycled_shift_right(a);

    for(int i = 0; i < a.size(); ++i) 
        std::cout << a[i];
    return 0;
}
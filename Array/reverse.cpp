#include <iostream>
#include <array>

void reverse_array(std::array<int, 5> &a) {
    for(int i = 0; i < a.size() / 2; ++i) {
        int tmp = a[i];
        a[i] = a[a.size() - 1 - i];
        a[a.size() - 1 - i] = tmp;
    }
    std::cout << "inside ";
    for(int i = 0; i < a.size(); ++i) 
        std::cout << a[i] << ' ';
}

int main()
{
    std::array<int, 5> a = {0,1,2,3,4};
    reverse_array(a);
    for(int i = 0; i < a.size(); ++i) 
        std::cout << a[i] << ' ';

    return 0;
}
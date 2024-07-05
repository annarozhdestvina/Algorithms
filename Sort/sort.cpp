#include <iostream>
#include <array>

void insertion_sort(std::array<int, 5> &a) {
    for(int i = 1; i < a.size(); ++i) {
        int k = i;
        // int j = i - 1;
        while(k > 0 && a[k - 1] > a[k]) {
            int tmp = a[k];
            a[k] = a[k - 1];
            a[k - 1] = tmp;
            --k;
        }
    }
}

void test_sort(/*int (*algorithm)(std::array)*/) {
    {
        std::cout<< "Test #1: \n";
        std::array<int, 5> a = {0,1,4,3,5};
        std::array<int, 5> a_sorted = {0,1,3,4,5};
        for(int i = 0; i < a.size(); ++i)
            std::cout << a[i] << ' ';
        
        insertion_sort(a);
        std::cout << "after sort\n";
        for(int i = 0; i < a.size(); ++i)
            std::cout << a[i] << ' ';
        bool flag = true;
        for(int i = 0; i < a.size(); ++i) {
            if(a[i] != a_sorted[i])
                flag = false;
        }

        if(flag) {
            std::cout << "OK\n";
        } else {
            std::cout << "Fail\n";
        }
    }


    {
        std::cout<< "Test #2: \n";
        std::array<int, 5> a = {4,1,4,3,1};
        std::array<int, 5> a_sorted = {1,1,3,4,4};
        insertion_sort(a);
        bool flag = true;
        for(int i = 0; i < a.size(); ++i) {
            if(a[i] != a_sorted[i])
                flag = false;
        }

        if(flag) {
            std::cout << "OK\n";
        } else {
            std::cout << "Fail\n";
        }
    }


}

int main() {
    test_sort();


    return 0;
}
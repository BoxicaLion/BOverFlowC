#include <iostream>
#include <stdio.h>
#include <limits.h>





int main() {
    int n = INT_MAX -2; // checking whether the C++ is counting the "V bite" or is ignoring;

    for(int i = 0 ; i < 6; i++){
        std::printf(" n == %d\n", n);
        n++;
    }


    return 0;
}

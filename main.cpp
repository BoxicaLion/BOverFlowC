#include <bitset>
#include <stdio.h>
#include <limits.h>
#include <iostream>
using namespace std;

void convertToBinaryNegarive(const int num){

    bitset<16> x(num);

    std::cout << x << " ";

}
string convertToBinnaryRecursion(int num){
    if(num == 0 ){
        return "0";
    } else if(num == 1){
        return "1";
    }else{
        return convertToBinnaryRecursion(num / 2) + convertToBinnaryRecursion(num % 2);
    }
}



int main() {
    int n = INT_MAX -2; // checking whether the C++ is counting the "V bite" or is ignoring;

    for(int i = 0 ; i < 6; i++){
        std::printf(" n == %d\n", n);
        convertToBinaryNegarive(n);
        std::cout << convertToBinnaryRecursion(n);
        n++;
    }



    return 0;
}

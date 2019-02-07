#include <iostream>


int main() {
    int i {0};//first integer
    int j {0};//second integer
    int sum{0};// make sum
    std::cout << "please input the first integer: "; //first input
    std::cin >> i; //
    std::cout << "please input the second integer: ";//second input
    std::cin >> j;//
    sum = i+j;
    std::cout << " the sum of integer 1: " << i << " and integer 2: " << j << " is " << sum; // state the two integers input just because then add them together.
}
#include <iostream>

#include "sum.h"
#include "sub.h"
#include "div.h"
#include "mul.h" // Include our new multiplication header


using std::cout;

int main() {

    std::cout << "sum(1, 5) = " << sum(1, 5) << '\n';
    std::cout << "sub(5, 1) = " << sub(5, 1) << '\n';
    std::cout << "div(9, 3) = " << divide(9, 3) << '\n';
    std::cout << "mul(4, 2) = " << mul(4, 2) << '\n'; // Call  new mul method
    return 0;
}
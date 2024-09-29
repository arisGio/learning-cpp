#include <iostream>
#include <cmath>

int main() {
    double floored = floor(1.2);
    double powered = pow(2,3);
    std::cout << "Flooring 1.2 is " << floored << std::endl
              << "2 to the 3rd power is " << powered;
    return 0;
}
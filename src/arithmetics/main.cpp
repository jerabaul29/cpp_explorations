#include "iostream"
#include "math.h"

// TODO: write a small constexpr method for unsigned int powers of 2
// TODO: check if pow can generate a constexpr value

int main()
{
    // about powers
    // there is no ** in c++, instead, either be smart on simple cases, or use the pow math function

    // powers of 2, the low level way
    constexpr int two_to_12 = 0b1 << 12;
    constexpr int two_to_12_middle = (0b1 << 11) - 1;

    std::cout << "2**12 with bitshift = " << two_to_12 << std::endl;
    std::cout << "2**11 - 1 with bitshift = " << two_to_12_middle << std::endl;

    // powers of 2, the cmath way
    constexpr double two_to_12_cmath = pow(2.0, 12.0);

    std::cout << "2**12 with pow = " << two_to_12_cmath << std::endl;

    return 0;
}

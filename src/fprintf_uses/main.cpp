#include <iostream>

int main()
{
    char buffer_out[32];

    // printing an int in fixed format
    int some_int_1 {13};
    sprintf(buffer_out, "%03E", some_int_1);  // force putting sign, use leading 0s, 5 chars fixed width, int printing
    std::cout << buffer_out << std::endl;

    // printing an int in fixed format
    int some_int {123};
    sprintf(buffer_out, "%+05i", some_int);  // force putting sign, use leading 0s, 5 chars fixed width, int printing
    std::cout << buffer_out << std::endl;

    // printing a double in fixed format
    double some_double {-2345.789};
    sprintf(buffer_out, "%011.4f", some_double);  // use leading 0s, 10 chars fixed width (including sign and .), 
    std::cout << buffer_out << std::endl;

    // printing in scientific notation format
    double scientific_double {1.34e8};
    sprintf(buffer_out, "%.2E", scientific_double);
    std::cout << buffer_out << std::endl;

    return 0;
}

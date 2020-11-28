#include "iostream"

// in order to display all the problems at compile time, need the right flags:
// -Wconversion -Wsign-conversion -Wsign-promotion

int main(void)
{
    // conversions that do not loose information, ie promotions, are not too problematic
    // and I do not think that there is a way to emit a warning for these

    int start_int = -125;
    long long int end_longlongint = start_int;

    std::cout << "start_int is " << start_int << std::endl;
    std::cout << "end_longlongint is " << end_longlongint << std::endl;

    // one exception may be float being promoted to double in embedded
    float a_float = 12.4;

    // conversions loosing information are especially problematic

    unsigned long int end_unsigned = start_int;

    std::cout << "end_unsigned is " << end_unsigned << std::endl;

    float some_float = 3.5;
    int some_int = some_float;

    std::cout << "some_float is " << some_float << std::endl;
    std::cout << "some_int is " << some_int << std::endl;

    return 0;
}

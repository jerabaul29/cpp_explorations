#include "iostream"
#include "func_with_callback.h"

/*
int square_int(double in){
    return static_cast<int>(in * in);
}

double square_double(double in){
    return in * in;
}
*/

int main(void)
{
    std::cout << "Hello world" << std::endl;
    
    auto out_default = func_with_callback(3.5);
    std::cout << "using defaults: " << out_default << std::endl;

/*
    auto out_int = func_with_callback(3.5, square_int);
    std::cout << "using square_int: " << out_int << std::endl;

    auto out_double = func_with_callback(3.5, square_double);
    std::cout << "using square_double: " << out_double << std::endl;
*/

    return 0;
}

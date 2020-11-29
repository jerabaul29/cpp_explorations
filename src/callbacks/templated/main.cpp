#include "iostream"
#include "func_with_callback.h"

void callback(double in){
    std::cout << "call to custom callback, input was " << in << std::endl;
}

int main(void)
{
    std::cout << "Hello world" << std::endl;
    
    auto out_default = func_with_callback(3.5);

    auto out_int = func_with_callback(3.5, callback);

    return 0;
}

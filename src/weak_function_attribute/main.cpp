#include "iostream"
#include "print.h"

// if this is here, will overwrite the weak function declared by print.h
// if removed, the weak function will be used
void print(void){
    std::cout << "strong print" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::cout << "Hello world" << std::endl;
    print();
    return 0;
}

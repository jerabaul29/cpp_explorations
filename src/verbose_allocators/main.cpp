#include <iostream>
#include <vector>

void* operator new(std::size_t n) {
    std::cout << "[Allocate " << n << " bytes]";
    void * ptr_out = malloc(n);
    std::cout << " at addr " << ptr_out << std::endl;
    return ptr_out; 
}

// keeping track of how much memory is released is actually a bit tricky, see discussion at:
// https://stackoverflow.com/questions/65098495/redefining-new-and-delete-operators-in-cpp-for-tracking-memory-allocations-cann?noredirect=1#comment115089346_65098495
void operator delete(void* p) throw() {
    std::cout << "[Free 1  byte] at addr " << p << std::endl;
    free(p);
}

void operator delete(void* p, std::size_t nbr_bytes) throw() {
    std::cout << "[Free " << nbr_bytes << " bytes] at addr " << p << std::endl;
    free(p);
}

int main()
{
    std::cout << "allocate a single int" << std::endl;
    int * p_1 = new int;
    *p_1 = 10;
    delete p_1;

    std::cout << "allocate block of ints" << std::endl;
    int * p_2 = new int[10];
    p_2[0] = 10;
    p_2[1] = 11;
    delete[] p_2;

    std::cout << "small vector" << std::endl;
    std::vector<int> vec_1 {1, 2, 3, 4};

    // std::cout << "slightly bigger vector" << std::endl;
    // //std::vector<int> vec_2 (0, 100);
    // std::vector<int> vec_2 (100, 0);
    // vec_2.at(125) = 1;
    
    // std::cout << "ready to return" << std::endl;

    return 0;
}

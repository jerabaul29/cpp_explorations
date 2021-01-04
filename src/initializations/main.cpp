#include <iostream>

class ExClass{
    private:
        const int i;
    public:
        ExClass(int i=0): i{i} {
            // needed even if empty
        }
        void print(void){
            std::cout << "const int i = " << i << std::endl;
        }
};

int main(void)
{
    int i = 1;
    int j (2);
    int k {3};

    std::cout << "i " << i << " j " << j << " k " << k << std::endl;

    int i2 = 1.1;
    int j2 (2.1);
    // int k2 {3.1};  // this does not compile, this is why it is actually safer!

    // std::cout << "i " << i2 << " j " << j2 << " k " << k2 << std::endl;
    std::cout << "i " << i2 << " j " << j2 << std::endl;

    ExClass ex1;
    ex1.print();

    ExClass ex2 (2.3);
    ex2.print();


    return 0;
}

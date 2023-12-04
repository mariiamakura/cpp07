#include "include/Array.hpp"


int main( void )
{
    Array<int> a(3);
    a[0] = 9;
    a[1] = 8;
    a[2] = 7;
    Array<int>b(a);

    Array<int>c(3);
    c = b;
    c[0] = 1;
    c[1] = 2;
    c[2] = 3;
    try {
        c[3] = 4; //out of range
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    Array<char>cherry(3);
    cherry[0] = 'a';
    cherry[1] = 'b';
    cherry[2] = 'c';

    std::cout << "array A : ";
    a.printArr();
    std::cout << std::endl;

    std::cout << "array C : ";
    c.printArr();
    std::cout << std::endl;

    std::cout << "array CHAR : ";
    cherry.printArr();
    std::cout << std::endl;
    return 0;
}
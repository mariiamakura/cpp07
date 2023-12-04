#include "include/iter.hpp"

void intTest() {
    int a[] = {1, 2, 3, 4, 5};

    std::cout << "\nbefore addOne function" << std::endl;
    ::iter(a, 5, ::printArr);

    ::iter(a, 5, ::addOne);

    std::cout << "\nafter addOne function" << std::endl;
    ::iter(a, 5, ::printArr);
}

void charTest() {
    char a[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "\nbefore addOne function" << std::endl;
    ::iter(a, 5, ::printArr);

    ::iter(a, 5, ::addOne);

    std::cout << "\nafter addOne function" << std::endl;
    ::iter(a, 5, ::printArr);
}

void testString() {
    std::string a[] = {"aaa", "bbb", "ccc", "ddd", "eee"};

    std::cout << "\nbefore addOne function" << std::endl;
    ::iter(a, 5, ::printArr);

    ::iter(a, 5, ::addChar);

    std::cout << "\nafter addOne function" << std::endl;
    ::iter(a, 5, ::printArr);
}

int main( void )
{
    intTest();
    charTest();
    testString();

    return 0;
}
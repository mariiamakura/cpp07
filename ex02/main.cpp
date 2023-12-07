#include "include/Array.hpp"

int main( void )
{
    Array<int>empty;

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


    std::cout << "array A : ";
    a.printArr();
    std::cout << std::endl;

    std::cout << "array C : ";
    c.printArr();
    std::cout << std::endl;

    Array<std::string>cherry(3);
    cherry[0] = "aaaaaa";
    cherry[1] = "bbbbbb";
    cherry[2] = "cccccc";


    std::cout << "array STRING : ";
    cherry.printArr();
    std::cout << std::endl;
    return 0;
}

//#include <iostream>
//#include "include/Array.hpp"
//#include  <cstdlib>
//
//#define MAX_VAL 750
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//    //SCOPE
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//    }
//    delete [] mirror;//
//    return 0;
//}
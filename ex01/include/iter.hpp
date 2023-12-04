#pragma once

#include <iostream>
#include <string.h>

template <typename T>
void addOne(T &n) {
    n += 1;
}

template <typename T>
void printArr(T &n) {
    std::cout << n << " ";
}

template <typename T>
void addChar(T &n) {

    for (int i = 0; i < (int)n.length(); i++)
    {
        n[i] += 1;
    }
}

template <typename T>
void iter(T *address, int len, void(*fn)(T&)) {
    for (int i = 0; i < len; i++)
    {
        fn(address[i]);
    }
}
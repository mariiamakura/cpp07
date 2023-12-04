#pragma once

#include <iostream>

template <typename T>
void swap(T &arg1, T &arg2) {
    T tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;
}

template <typename T>
T min(T arg1, T arg2) {
    if (arg1 > arg2)
        return (arg2);
    else
        return (arg1);
}

template <typename T>
T max(T arg1, T arg2) {
    if (arg1 > arg2)
        return (arg1);
    else
        return (arg2);
}
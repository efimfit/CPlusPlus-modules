#pragma once
#include <iostream>

template <typename T>
void iter(T *arr, int size, void (*f)(T const&a))
{
    for (int i = 0; i < size; i++)
        f(arr[i]);
}

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
int easyfind(T &a, int b)
{
   typename T::const_iterator it;
   it = find(a.begin(), a.end(), b);
   if (it == a.end())
       throw std::exception();
   return *it;
}
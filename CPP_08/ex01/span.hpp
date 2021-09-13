#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <limits.h>

class Span{
private:
    unsigned int N;
    std::vector<int> vect;
public:
    Span();
    ~Span();
    Span(Span const &b);
    Span(unsigned int N);

    Span &operator=(Span const &b);

    void    addNumber(int x);
    int     shortestSpan(void);
    int     longestSpan(void);
    void    print(void);
};
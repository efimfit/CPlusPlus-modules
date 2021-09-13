#include "span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(const Span &b)  {
    *this = b;
}

Span::Span(unsigned int _N) : N(_N) {}

Span &Span::operator=(const Span &b) {
    N = b.N;
    vect = b.vect;
    return *this;
}

void Span::addNumber(int x) {
    if (vect.size() == N)
        throw std::exception();
    vect.push_back(x);
}

int Span::shortestSpan() {
    if (vect.size() < 2)
        throw std::exception();
    std::vector<int>::iterator i, j;
    int min_span = INT_MAX;
    int diff;

    for (i = vect.begin(); i != vect.end() - 1; i++){
        for (j = i + 1; j != vect.end(); j++){
            diff = abs(*j - *i);
            if (diff < min_span)
                min_span = diff;
        }

    }
    return min_span;
}

int Span::longestSpan() {
    if (vect.size() < 2)
        throw std::exception();
    int max_nbr = *max_element(vect.begin(), vect.end());
    int min_nbr = *min_element(vect.begin(), vect.end());
    return max_nbr - min_nbr;
}

void Span::print() {
    std::vector<int>::iterator it;
    for (it = vect.begin(); it != vect.end(); it++)
        std::cout << *it << std::endl;
}
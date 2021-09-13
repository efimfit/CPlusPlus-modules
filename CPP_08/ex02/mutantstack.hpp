#pragma once
#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>{
public:
    MutantStack();
    ~MutantStack();
    MutantStack(MutantStack const &b);

    MutantStack &operator=(MutantStack const &b);

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() {
        return (std::stack<T>::c.begin());}
    iterator end() {
        return (std::stack<T>::c.end());}
};

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template <class T>
MutantStack<T>::~MutantStack() {}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &b) : std::stack<T>(b){}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &b) {
    std::stack<T>::operator=(b);
    return *this;
}

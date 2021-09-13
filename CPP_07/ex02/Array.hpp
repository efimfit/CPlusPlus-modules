#pragma once
#include <iostream>
#include <cstdlib>
template <class T>
class Array{
private:
    T   *arr;
    unsigned int arr_len;
public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(Array const &b);

    Array<T> &operator=(Array<T> const &b);
    T &operator[](unsigned int i);
    unsigned int size(void);

    class OutOfTheLimits : public std::exception{
        virtual const char *what() const throw() {return "Out Of the limits";}
    };
};

template <class T>
Array<T>::Array() : arr(new T[0]), arr_len(0){}
template <class T>
Array<T>::~Array() {
    delete [] arr;
}
template <class T>
Array<T>::Array(unsigned int n) : arr_len(n){
    arr = new T[n];
    for (unsigned int i = 0; i < n; i++)
        arr[i] = T();
}
template <class T>
Array<T>::Array(const Array<T> &b) : arr(NULL) {
    *this = b;
}
template <class T>
Array<T> &Array<T>::operator=(const Array<T> &b) {
    delete [] arr;
    arr_len = b.arr_len;
    arr = new T[arr_len];
    for (unsigned int i = 0; i < arr_len; i++)
        arr[i] = b.arr[i];
    return *this;
}
template <class T>
T &Array<T>::operator[](unsigned int i) {
    if (i >= arr_len)
        throw OutOfTheLimits();
    return arr[i];
}
template <class T>
unsigned int  Array<T>::size(void){
    return arr_len;
}

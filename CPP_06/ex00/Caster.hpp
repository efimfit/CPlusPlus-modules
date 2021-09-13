#pragma once
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include <cfloat>

class Caster{
private:
    bool    is_char;
    int     count_sign;
    int     count_f;
    int     count_dot;
public:
    Caster();
    ~Caster();
    Caster(Caster const &b);

    Caster &operator=(Caster const &b);

    bool check_empty(std::string &str)const;
    bool find_char(std::string &str);
    bool check_inf(std::string &str)const;
    bool print_char(std::string &str)const;

    bool print_number(std::string &str)const;
    void print_chr(long double r)const;
    void print_int(long double r)const;
    void print_float(long double r)const;
    void print_double(long double r)const;
};

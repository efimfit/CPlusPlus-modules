#include "Caster.hpp"

Caster::Caster() : is_char(false), count_sign(0), count_f(0), count_dot(0){}

Caster::~Caster() {}

Caster::Caster(const Caster &b){
    *this = b;
}

Caster &Caster::operator=(const Caster &b)  {
    is_char = b.is_char;
    count_sign = b.count_sign;
    count_f = b.count_f;
    count_dot = b.count_dot;
    return *this;
}

bool Caster::check_empty(std::string &str) const {
    if (!str[0]){
        std::cout << "empty argument" << std::endl;
        return true;
    }
    return false;
}

bool Caster::find_char(std::string &x) {
    for (int i = 0; x[i]; i++){
        if (x[i] == '+' || x[i] == '-') {count_sign++;}
        if (x[i] == 'f') {count_f++;}
        if (x[i] == '.') {count_dot++;}

        if ((i > 0 && (x[i] == '+' || x[i] == '-')) ||
        (x[i] == '.' && count_f > 0) || (x[i] == 'f' && !count_dot) ||
        count_sign > 1 || count_f > 1 || count_dot > 1){
            std::cout << "Conversion is impossible" << std::endl;
            return true;
        }
        if (x[i] != '0' && x[i] != '1' && x[i] != '2' && x[i] != '3' && x[i] != '4' && x[i] != '5' &&
        x[i] != '6' && x[i] != '7' && x[i] != '8' && x[i] != '9' && x[i] != '.' && x[i] != 'f' &&
        x[i] != '+' && x[i] != '-')
            is_char = true;
    }
    return false;
}

bool Caster::check_inf(std::string &x) const {
    if (x == "+inf" || x == "-inf" || x == "nan"){
        std::cout << "[DOUBLE]" << std::endl;
        std::cout << "char: " << "Impossible" << std::endl;
        std::cout << "int: " << "Impossible" << std::endl;
        std::cout << "float: " << x << "f" << std::endl;
        std::cout << "double: " << x << std::endl;
        return true;
    }
    if (x == "+inff" || x == "-inff" || x == "nanf"){
        std::cout << "[FLOAT]" << std::endl;
        std::cout << "char: " << "Impossible" << std::endl;
        std::cout << "int: " << "Impossible" << std::endl;
        std::cout << "float: " << x << std::endl;
        std::cout << "double: " << x[0] << x[1] << x[2];
        if (x != "nanf")
            std::cout <<  x[3];
        std::cout << std::endl;
        return true;
    }
    return false;
}

bool Caster::print_char(std::string &x) const {
    if ((is_char || x == "." || x == "+" || x == "-" || x == "f") && !x[1]){
        std::cout << "[CHAR]" << std::endl;
        std::cout << "char: " << x << std::endl;
        std::cout << "int: " << static_cast<int>(x[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(x[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(x[0]) << ".0" << std::endl;
        return true;
    }
    else if (is_char){
        std::cout << "Conversion is impossible" << std::endl;
        return true;
    }
    return false;
}

bool Caster::print_number(std::string &x) const {
    try{
        std::cout <<  std::fixed << std::setprecision(1) ;
        long double r = std::atof(x.c_str());
        if (count_dot && !count_f)
            std::cout << "[DOUBLE]" << std::endl;
        else if (count_dot)
            std::cout << "[FLOAT]" << std::endl;
        else
            std::cout << "[INT]" << std::endl;
        print_chr(r);
        print_int(r);
        print_float(r);
        print_double(r);
        return false;
    }
    catch (...){
        std::cout << "Conversion is impossible" << std::endl;
        return true;
    }
}

void Caster::print_chr(long double r) const {
    if (r < CHAR_MIN || r > CHAR_MAX)
        std::cout << "char: " << "overflowed" << std::endl;
    else if (r < 32 || r == CHAR_MAX)
        std::cout << "char: " << "Not displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(r) <<"'" << std::endl;
}

void Caster::print_int(long double r) const{
    if (r < INT_MIN || r > INT_MAX)
        std::cout << "int: " << "overflowed" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(r) << std::endl;
}

void Caster::print_float(long double r) const {
    if (r < FLT_MAX * (-1) || r > FLT_MAX)
        std::cout << "float: " << "overflowed" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(r) << "f" << std::endl;
}

void Caster::print_double(long double r) const {
    if (r < DBL_MAX * (-1) || r > DBL_MAX)
        std::cout << "double: " << "overflowed" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(r) << std::endl;
}

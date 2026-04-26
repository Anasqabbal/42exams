#include "bigint.hpp"


//CCF
bigint::bigint(void){num = "0";}

bigint::~bigint(){}

bigint::bigint(const bigint &obj){num = obj.num;}

bigint &bigint::operator=(const bigint &obj)
{
    if (this != &obj)
        num = obj.num;
    return *this;
}


// overload the constructors
bigint::bigint(size_t val)
{
    num = IntToString
}

std::ostream &operator<<(std::ostream &output, const bigint &obj)
{
    output << obj.num;
    return output;
}

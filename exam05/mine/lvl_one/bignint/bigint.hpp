#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>


class bigint
{
    private:
    std::string num;
    public:

    bigint();
    ~bigint();
    bigint(const bigint &obj);
    bigint &operator=(const bigint &obj);

    bigint(size_t val);

    friend std::ostream &operator<<(std::ostream &output, const bigint &obj);
};




#endif
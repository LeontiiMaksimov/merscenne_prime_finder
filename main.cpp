#include <iostream>
#include "bigint.h"

int main()
{
    bigint num = 2;
    while (true)
    {
        if (bigint::_big_isprime(num))
        {
            std::cout << num << std::endl;
        }
        num++;
    }
    return 0;
}

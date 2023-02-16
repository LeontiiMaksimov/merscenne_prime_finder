#include <iostream>
#include "bigint.h"

int main()
{
    bigint num = 2;
    while (true)
    {
        if (_big_isPrime(num))
        {
            std::cout << num << std::endl;
        }
        num++;
    }
    return 0;
}

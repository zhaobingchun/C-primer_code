#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Please input two number as the lower and upper" << std::endl;
    int value, lower, upper;
    std::cin >> lower >> upper;
    if(lower > upper)
    {
        value = upper;
        upper = lower;
        lower = upper;
    }
    std::cout << "The numbers betwen " << lower << " and " << upper << " is " << std::endl;
    for (int i = lower, count = 1; i <= upper; count++, i++) {
        std::cout << i ;
        if(count % 10 == 0)
        {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    return 0;
}

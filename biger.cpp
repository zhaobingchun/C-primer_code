#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Enter two number " << std::endl;

    int v1, v2;
    std::cin >> v1 >> v2;
    if (v1 > v2) {
        std::cout << "The bigger number is " << v1 << std::endl;
    } else {
        std::cout << "The bigger number is " << v2 << std::endl;
    }


    return 0;
}

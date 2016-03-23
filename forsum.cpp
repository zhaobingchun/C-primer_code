#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Please input two numbers" << std::endl;

    int v1, v2, sum = 0;
    std::cin >> v1, v2;
    for (int i = v1; i <= v2; i++) {
        sum += i;
    }

    std::cout << "the sum betwen " << v1 << " and " << v2 << " is " << sum << std::endl;
    return 0;
}

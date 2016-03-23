#include <iostream>

int main(int argc, char *argv[])
{
    int amount = 0, value;

    //read user input
    while(std::cin >> value)
    {
        if(value < 0)
        {
            amount++;
        }
    }

    std::cout << "Amount of all negative read is" << amount << std::endl;
    return 0;
}

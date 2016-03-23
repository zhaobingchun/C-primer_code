#include <iostream>

#if 0
int main(int argc, char *argv[])
{
    int sum = 0;
    for (int i = 50; i <= 100; i++) {
        sum += i;
    }
    std::cout << "The sum of 50 to 100 is " << sum << std::endl;

    return 0;
}
#endif

#if 0
int main(int argc, char *argv[])
{
    int sum = 0, i = 50;
    while(i <= 100)
    {
        sum += i;
        ++i;
    }
    std::cout << "The sum of 50 to 100 is " << sum << std::endl;
    return 0;
}

#endif

#if 0

int main(int argc, char *argv[])
{
    int i = 10;
    while (i >= 0) {
        std::cout << i << " ";
        --i;
    }
    return 0;
}


#endif

#if 1

int main(int argc, char *argv[])
{
    for (int i = 10; i >= 0; --i) {
        std::cout << i << " ";
    }

    return 0;
}


#endif
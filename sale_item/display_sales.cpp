#include <iostream>
#include "Sales_item.h"

int main(int argc, char *argv[])
{
    Sales_item book;

    //read book and display book sales num and price
    std::cout << Enter transactions << std::endl;
    while (std::cin >> book) {
        std::cout << "ISBN, numbers of copies sold, "
                  << "total resever, and average price are:"
                  << std::endl;
        std::cout << book << std::endl;
    };
    return 0;
}

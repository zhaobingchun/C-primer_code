#include <iostream>
#include "Sales_item.h"

int main(int argc, char *argv[])
{
    Sales_item total, trans;

    //read transcations
    std::cout << "Enter transcations " << std::endl;

    if (std::cin >> total) {
        while (std::cin >> trans) {
            if (total.same_isbn(trans)) {
                total = total + trans;
            }
            else{
                std::cout << "different ISBN." << std::endl;
            }
        }
        std::cout << "The total information:" << std::endl
                  << "ISBN, numbers of copies sold, "
                  << "total resever, and average price are: "
                  << total << std::endl;
    }
    else
    {
        std::cout << "No data!?" << std::endl;
        return -1;
    }
    return 0;
}

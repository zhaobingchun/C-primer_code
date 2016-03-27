#include <iostream>
#include "Sales_item.h"

int main(int argc, char *argv[])
{
    Sales_item trans1, trans2;

    //read in transactions
    std::cout << "Enter transactions: " << std::endl;
    std::cin >> trans1 >> trans2;
    if (trans1.same_isbn(trans2)) {
        std::cout << "The total information:" << std::endl
                  << "ISBN, number of copies sold, "
                  << "the resever, and average prace are: "
                  << trans1 + trans2 << std::endl;
    }
    else{
        std::cout << "The two transactions have different ISBN." << std::endl;
    }
    return 0;
}

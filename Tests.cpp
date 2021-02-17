//Author: Aiden Hadisi

#include <iostream>
#include "DuplicateRemover.h"

int main()
{
    std::vector<int> vInt{ 1,1,3,3,3,5,5 };
    std::vector<double> vDouble{ 1.2,1.2,3.4,3.4,3.4,5.5,5.5 };

 
    size_t sizeVInt = DuplicateRemover::removeDuplicates(vInt);
    size_t sizeVDouble = DuplicateRemover::removeDuplicates(vDouble);

    for (int i : vInt) {
        std::cout << i << " ";
    }
    std::cout << std::endl << "Size of vInt is now: " << sizeVInt << std::endl;

    for (double i : vDouble) {
        std::cout << i << " ";
    }
    std::cout << std::endl << "Size of vInt is now: " << sizeVDouble << std::endl;

}

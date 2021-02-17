//Author: Aiden Hadisi

#include "DuplicateRemover.h"


int DuplicateRemover::removeDuplicates(std::vector<double>& v)
{
    if (v.empty()) return 0;

    std::vector<double>::iterator lazyIt = v.begin();

    for (std::vector<double>::iterator fastIt = v.begin(); fastIt != v.end() - 1; fastIt++) {
        if (*fastIt != *(fastIt + 1)) {
            *lazyIt++ = *fastIt;
        }
    }

    *lazyIt++ = *(v.end() - 1);

    v.erase(lazyIt, v.end());
    return v.size();
}

int DuplicateRemover::removeDuplicates(std::vector<int>& v)
{
    if (v.empty()) return 0;

    std::vector<int>::iterator lazyIt = v.begin();

    for (std::vector<int>::iterator fastIt = v.begin(); fastIt != v.end() - 1; fastIt++) {
        if (*fastIt != *(fastIt + 1)) {
            *lazyIt++ = *fastIt;
        }
    }

    *lazyIt++ = *(v.end() - 1);

    v.erase(lazyIt, v.end());
    return v.size();
}
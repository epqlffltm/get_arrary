#include "Array.h"
#include <iostream>

int main(void)
{
    Array array;

    int index = array.get_index();

    int* pary = array.get_ary(index);

    int sum = array.get_sum(pary);
    std::cout << "sum: " << sum << std::endl;

    int max = array.get_max(pary);
    std::cout << "max: " << max << std::endl;

    int count = array.get_count(pary);
    std::cout << "count: " << count << std::endl;

    array.swap(pary);

    return 0;
}

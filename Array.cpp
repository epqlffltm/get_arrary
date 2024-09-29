#include "Array.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Array::start_randum()
{
    srand(time(NULL));
}

int Array::get_index()
{
    return rand() % 10 + 5;
}

int* Array::get_ary(int index)
{
    this->index = index;

    if (num_arr != nullptr) {
        delete[] num_arr;
    }

    num_arr = new int[index];

    for (int i = 0; i < index; i++)
    {
        num_arr[i] = rand() % 100;
    }

    return num_arr;
}

int Array::get_sum(int* num_arr)
{
    sum = 0;
    this->num_arr = num_arr;

    for (int i = 0; i < index; i++)
    {
        sum += *(num_arr + i);
    }

    return sum;
}

int Array::get_max(int* num_arr)
{
    max = 0;
    for (int i = 0; i < index; i++)
    {
        max = max < *(num_arr + i) ? *(num_arr + i) : max;
    }

    return max;
}

int Array::get_count(int* num_arr)
{
    target = rand() % 100;
    count = 0;
    for (int i = 0; i < index; i++)
    {
        count = target > *(num_arr + i) ? count + 1 : count;
    }

    return count;
}

void Array::swap(int* num_arr)
{
    output(index, num_arr);

    for (int i = 0; i < (index / 2); i++)
    {
        *(num_arr + i) = *(num_arr + i) ^ *(num_arr + index - 1 - i);
        *(num_arr + index - 1 - i) = *(num_arr + i) ^ *(num_arr + index - 1 - i);
        *(num_arr + i) = *(num_arr + i) ^ *(num_arr + index - 1 - i);
    }
    output(index, num_arr);
}

void Array::output(int index, int* num_arr)
{
    for (int i = 0; i < index; i++)
    {
        std::cout << *(num_arr + i);
        if (i != index - 1)
        {
            std::cout << "->";
        }
    }
    std::cout << std::endl;
}

Array::~Array()
{
    delete[] num_arr;
}

#pragma once
#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
    int index, sum = 0, max = 0, target = 0, count = 0;
    int* num_arr = nullptr;

    void start_randum();

public:
    int get_index();
    int* get_ary(int index);
    int get_sum(int* num_arr);
    int get_max(int* num_arr);
    int get_count(int* num_arr);
    void swap(int* num_arr);
    void output(int index, int* num_arr);
    ~Array();
};

#endif // ARRAY_H

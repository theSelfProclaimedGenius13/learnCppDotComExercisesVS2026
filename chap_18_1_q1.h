#pragma once
#include<array>
template<typename T, std::size_t N>
void print_array(const std::array<T, N>& arr);
template<typename T, std::size_t N>
void selection_sort(std::array<T, N>& arr);
void result_message_chap_18_1_q1();
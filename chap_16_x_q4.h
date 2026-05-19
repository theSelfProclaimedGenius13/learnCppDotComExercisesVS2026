#include <vector>
#include <utility>
#pragma once

template<typename T>
std::pair<std::vector<T>, std::vector<T>> min_max_chap_16_x_q4(const std::vector<T>& v);

template<typename T>
void print_min_max_chap_16_x_q4(const std::vector<T>& v, const std::pair<std::vector<T>, std::vector<T>>& p);
template <typename T>
std::vector<T> vector_input();
void result_message_chap_16_x_q4();
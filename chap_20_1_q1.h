#include <functional>
#pragma once
using ArithmeticFunction = std::function<int(int, int)>;
bool invalid_input_chap_20_1_q1();
int get_integer_input_chap_20_1_q1();
char get_operator_input_chap_20_1_q1();
int add_chap_20_1_q1(int a, int b);
int subtract_chap_20_1_q1(int a, int b);
int multiply_chap_20_1_q1(int a, int b);
int divide_chap_20_1_q1(int a, int b);

ArithmeticFunction get_operation_function_chap_20_1_q1(char op);
void perform_calculation_chap_20_1_q1();
void result_message_chap_20_1_q1();


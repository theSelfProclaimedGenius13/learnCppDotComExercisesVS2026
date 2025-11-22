#include<iostream>
#include<cassert>

template<int N>
constexpr int factorial_chap_11_9_q1()
{
    static_assert(N >= 0, "Factorial is not defined for negative numbers.");
    if constexpr (N == 0) {
        return 1;
    } else {
        return N * factorial_chap_11_9_q1<N - 1>();
    }
}

void result_message_chap_11_9_q1() 
{
    static_assert(factorial_chap_11_9_q1<0>() == 1);
    static_assert(factorial_chap_11_9_q1<3>() == 6);
    static_assert(factorial_chap_11_9_q1<5>() == 120);
    //factorial_chap_11_9_q1<-3>(); // should fail to compile

}
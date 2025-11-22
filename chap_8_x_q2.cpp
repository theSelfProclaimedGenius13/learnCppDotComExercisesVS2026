// Make sure that assert triggers even if we compile in release mode
#undef NDEBUG

#include <cassert> // for assert
#include <iostream>
#include <cmath>   // for sqrt
bool isPrime_chap_8_x_q2(int x)
{
	if (x < 2) return false; // numbers less than 2 are not prime
	for (int i = 2; i <= std::sqrt(x); ++i) {
		if (x % i == 0) {
			return false; // found a divisor, not prime
		}
	}
	return true; // no divisors found, is prime

    
    // write this function using a for loop
}

void result_message_chap_8_x_q2()
{
    assert(!isPrime_chap_8_x_q2(1));
    assert(!isPrime_chap_8_x_q2(0)); // terminate program if isPrime(0) is true
    assert(isPrime_chap_8_x_q2(2));  // terminate program if isPrime(2) is false
    assert(isPrime_chap_8_x_q2(3));
    assert(!isPrime_chap_8_x_q2(4));
    assert(isPrime_chap_8_x_q2(5));
    assert(isPrime_chap_8_x_q2(7));
    assert(!isPrime_chap_8_x_q2(9));
    assert(isPrime_chap_8_x_q2(11));
    assert(isPrime_chap_8_x_q2(13));
    assert(!isPrime_chap_8_x_q2(15));
    assert(!isPrime_chap_8_x_q2(16));
    assert(isPrime_chap_8_x_q2(17));
    assert(isPrime_chap_8_x_q2(19));
    assert(isPrime_chap_8_x_q2(97));
    assert(!isPrime_chap_8_x_q2(99));
    assert(isPrime_chap_8_x_q2(13417));

    std::cout << "Success!\n";

}
#include <iostream>
#include "chap_16_9_q1.h"
#include <assert.h>


void result_message_chap_16_9_q1()
{
	assert(std::size(Animals::legs) == Animals::max_animals);
	std::cout << "An elephant has " << Animals::legs[Animals::elephant] << " legs.\n";

}
#pragma once
#include <vector>
namespace Animals
{
	enum Animals
	{
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		max_animals
	};

	const std::vector legs{ 2, 4, 4, 4, 2, 0 };
}
void result_message_chap_16_9_q1();
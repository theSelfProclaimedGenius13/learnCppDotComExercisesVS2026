#include "chap_15_x_q1_main.h"

void result_message_chap_15_x_q1_main() {
	Monster_15_x m{ MonsterGenerator::generate() };
	m.print();
}
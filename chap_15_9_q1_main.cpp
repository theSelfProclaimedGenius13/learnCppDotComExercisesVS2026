#include "chap_15_9_q1_main.h"
#include "chap_15_9_q1_Point3d.h"
#include "chap_15_9_q1_Vector3d.h"

void result_message_chap_15_9_q1_main()
{
	Point3d p{ 1.0, 2.0, 3.0 };
	Vector3d v{ 2.0, 2.0, -3.0 };

	p.print_chap_15_9_q1();
	p.moveByVector(v);
	p.print_chap_15_9_q1();

}
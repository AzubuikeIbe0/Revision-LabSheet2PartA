#include "Clock.h"

int main()
{
	int a, b, c;
	int choice = 0;

	Clock C;
	
	do
	{
		C.menu();
		C.inputTime(a, b, c);
		C.to12(a);
		C.to24(a);
		C.showTime(a, b, c);

	} while (choice != -1);
	

	return 0;
}



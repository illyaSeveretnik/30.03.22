#include <iostream>
#include <windows.h>
#include "one.h"

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	const int size = 5;
	int q[size];
	w(q, size);
	e(q, size);
	r(q, size);

	return 0;
}
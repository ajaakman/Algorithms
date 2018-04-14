#include <iostream>
#include "SelectionSort.h"
#include "PrintArray.h"


int main()
{
	int a[6] = { 5, 4, 0, 1, 3, 2 };

	printArray(a, sizeof(a) / sizeof(a[0]));
	
	SelectionSort( a , (sizeof(a) / sizeof(a[0])) );

	printArray(a, sizeof(a) / sizeof(a[0]));
	
	system("pause");
	return 0;
}
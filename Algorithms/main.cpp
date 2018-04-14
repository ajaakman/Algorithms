#include <iostream>
#include "PrintArray.h"
#include "SelectionSort.h"
#include "TowersOfHanoi.h"



int main()
{
	int a[6] = { 5, 4, 0, 1, 3, 2 };

	printArray(a, sizeof(a) / sizeof(a[0]));
	
	SelectionSort( a , (sizeof(a) / sizeof(a[0])) );

	printArray(a, sizeof(a) / sizeof(a[0]));
	
	TowersOfHanoi(4, A, B, C);		

	system("pause");
	return 0;
}
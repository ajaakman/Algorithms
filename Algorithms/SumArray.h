#pragma once

int SumArray(int array[], int length)
{
	int s = 0;
	for (int i = 0; i < length; i++)
		s += array[i];
	return s;
}

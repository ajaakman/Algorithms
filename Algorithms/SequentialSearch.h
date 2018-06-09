#pragma once

int SequentialSearch(int a[], int x, int i)
{
	while (a[i] != x) i--;
	return i;
}
#pragma once

void SelectionSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int j = i;
		for (int k = i + 1; k < n; k++)
		{
			if (a[k] < a[j])
			{
				j = k;
			}
		}
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}

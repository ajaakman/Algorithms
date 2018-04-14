#pragma once

void SelectionSort(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		int j = i;
		for (int k = i + 1; k < length; k++)
		{
			if (array[k] < array[j])
			{
				j = k;
			}
		}
		int t = array[i];
		array[i] = array[j];
		array[j] = t;
	}
}

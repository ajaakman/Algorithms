#include <iostream>

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

int main()
{
	int a[6] = { 5, 4, 0, 1, 3, 2 };

	for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;	
	
	SelectionSort( a , (sizeof(a) / sizeof(a[0])) );

	for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	
	system("pause");
	return 0;
}
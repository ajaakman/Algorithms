#pragma once

#include <iostream>

void Fibonacci(int n)
{
	if (n <= 1)
		std::cout << n << std::endl;
	else
	{
		int fnm2 = 0, fnm1 = 1, fn;
		for (int i = 1; i < n; i++)
		{
			fn = fnm1 + fnm2;
			fnm2 = fnm1; fnm1 = fn;
		}
		std::cout << fn << std::endl;
	}
}
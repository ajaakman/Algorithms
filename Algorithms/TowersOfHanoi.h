#pragma once
#include <iostream>

enum tower { A = 'A', B = 'B', C = 'C' };

void TowersOfHanoi(int n, tower x, tower y, tower z)
{
	if (n)
	{
		TowersOfHanoi(n - 1, x, z, y);
		std::cout << "Move top disk from tower " << char(x) << " to top of tower " << char(y) << std::endl;
		TowersOfHanoi(n - 1, z, y, x);
	}
}
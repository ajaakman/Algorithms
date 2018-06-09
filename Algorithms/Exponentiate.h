#pragma once

int Exponentiate(int x, int n)
{
	int power = 1;
	while (n > 0)
	{
		while (!(n % 2))
		{
			n /= 2;
			x *= x;
		}
		n--; power *= x;
	}
	return power;
}
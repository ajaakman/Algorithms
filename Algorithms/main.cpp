#pragma once

#include <iostream>
#include "PrintArray.h"
#include "SelectionSort.h"
#include "TowersOfHanoi.h"
#include "SumArray.h"
#include "Fibonacci.h"
#include "GreatestCommonDivisor.h"
#include "PrimeNumbers.h"
#include "LinkedLists.h"
	

int main()
{
	//---------------------------- -------------------------------------

	//---------------------------------Linked Lists------------------------------------------

	// Using linked lists to solve the "Josephus Problem".
	
	LinkedLists(10, 4);

	//---------------------------------Prime Numbers-----------------------------------------

	// Prints all prime numbers under 1000. Sieve of Eratosthenes.
   
	//PrimeNumbers();
	
	//----------------------------Greatest Common Divisor-------------------------------------
	
	// Euclid's algorithm. Used to find the greatest common divisor. Lowest integer that divides both numbers.
	
	//std::cout << GreatesCommonDivisor(200, 300) << std::endl;
	
	
	// ------------------------------Selection Sort------------------------------------------

	// Sorting an integer array.
	
	//int a[6] = { 5, 4, 0, 1, 3, 2 };
	//PrintArray(a, sizeof(a) / sizeof(a[0]));
	//SelectionSort( a , (sizeof(a) / sizeof(a[0])) );
	//PrintArray(a, sizeof(a) / sizeof(a[0]));	


	// -----------------------------TOWERS OF HANOI------------------------------------------

	// Recursive function that solves the Towers of Hanoi puzzle.
	
	//TowersOfHanoi(3);	// Takes number of plates as the argument.	


	//-----------------------------------Sum Array--------------------------------------------

	// Returns the sum of all elements of an array.

	//int b[6] = { 7, 4, 0, 1, 3, 2 };	
	//std::cout << SumArray(b, sizeof(b) / sizeof(b[0])) << std::endl;


	//-----------------------------------Fibonacci--------------------------------------------

	// Calculates the n-th number of the Fibonacci sequence.
	
	//Fibonacci(5);
	

	std::cin.get();
	return 0;
}
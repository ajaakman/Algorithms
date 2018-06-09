#pragma once

#include <iostream>

struct node
{
	int key; struct node *next;
};

void LinkedLists(int n = 9, int m = 5)
{
	int i, N = n, M = m;
	struct node *t, *x;
	t = new node; t->key = 1; x = t;

	for (i = 2; i <= N; i++)
	{
		t->next = new node;
		t = t->next; t->key = i;
	}
	t->next = x;

	while (t != t->next)
	{
		for (i = 1; i < M; i++) t = t->next;
		std::cout << t->next->key << ' ';
		x = t->next; t->next = x->next;
		delete x;
	}

	std::cout << t->key << '\n';
}
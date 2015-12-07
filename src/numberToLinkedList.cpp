/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node 
{
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) 
{
	int i, r;
	struct node *k, *first;
	if (N < 0)
		N = -1 * N;
	k = (struct node*)malloc(sizeof(struct node));
	k->num = N % 10;
	N = N / 10;
	k->next = NULL;
	first = k;
	for (i = 100; N > 0; i--)
	{
		k = (struct node*)malloc(sizeof(struct node));
		k->num = N % 10;
		N = N / 10;
		k->next = first;
		first = k;
	}
	return first;
}
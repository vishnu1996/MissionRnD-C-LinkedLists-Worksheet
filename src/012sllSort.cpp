/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node 
{
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	struct node *first, *temp;
	first = head;
	while (head!= NULL)
	{
		temp = head->next;
		while (temp!= NULL)
		{
			if (head->data >= temp->data)
			{
				head->data = head->data + temp->data;
				temp->data = head->data - temp->data;
				head->data = head->data - temp->data;
			}
			temp = temp->next;
		}
		head = head->next;
	}
	head = first;
}
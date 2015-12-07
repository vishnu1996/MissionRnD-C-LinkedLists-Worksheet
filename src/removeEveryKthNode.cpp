/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node 
{
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) 
{
	int i; struct node *temp,*first;
	first = head;
	if (K <= 1)
		return NULL;
	for (i = 1; head != NULL; i++)
	{
		if ((i+1) % K == 0)
			temp=head;
		if (i%K == 0)
			temp->next = head->next;
		head = head->next;
	}
	return first;
}
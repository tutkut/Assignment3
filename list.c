#include <stdlib.h>
#include <stdio.h>
#include "list.h"

ADD
{
	if (head == NULL)
	{
		head = (aNode *)malloc(sizeof(aNode));
		head->value = value;
		head->next = NULL;
	}
	else
	{
		aNode* freeSpot;
		aNode* newNode;

		freeSpot = head;
		while(freeSpot->next != NULL)
			freeSpot = freeSpot->next;
		
		newNode = (aNode *)malloc(sizeof(aNode));
		newNode->value = value;
		newNode->next = NULL;
		freeSpot->next = newNode; 
	}
}

PRINT
{
	if(head != NULL)
	{	
		aNode* temp = head;
		printf("Content of list is: ");
		while(temp != NULL)
		{
			printf(" %d ", temp->value);
			temp = temp->next;
		}
	}
	else
		printf("List is empty.");
	printf("\n");
}

struct NODE *find(int numDelete)
{
		aNode* temp = head;
		while(temp != NULL)
		{
			if(temp->value == numDelete)
			{
				return temp;
				break;
			}
			else
			{
				temp = temp->next;

			}
		}
		return NULL;
};

DELETE
{
	aNode* deleted = find(numDelete);
	if (deleted != NULL && deleted == head)
	{
		head = head->next;
		return TRUE;

	}
	else if(deleted!= NULL)
	{
		trail = (aNode *)malloc(sizeof(aNode));
		trail->next = head;

		while(trail->next != deleted)
		{
			trail = trail->next;
		}
		trail->next = deleted->next;
		deleted = NULL;
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
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
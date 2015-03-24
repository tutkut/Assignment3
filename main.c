#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "list.h"
//#include "list.c"


#define BOOLEAN int
#define TRUE 1
#define FALSE 0

int main(void)
{
	char fname[20];
	printf("Please enter a file name or a path to a file: ");
	scanf("%s", fname);

	FILE *data = fopen(fname, "rt");

	int value;
	while (!feof(data))
	{
		fscanf(data, "%d", &value);
		add(value);
	}

	prettyPrint();


	BOOLEAN userDelete = TRUE;
	int numDelete;
	char userAns[10];

	while(userDelete == TRUE && head != NULL)
	{
		printf("Please enter the integer number you want to delete: " );
		scanf("%d", &numDelete);

		BOOLEAN deleted = delete(numDelete);
		if (deleted == TRUE)
		{
			printf("NUMBER WAS DELETED.\n");
		}
		else if (deleted == FALSE)
		{
			printf("NUMBER WAS NOT FOUND.\n");
		}

		prettyPrint();

		if (head != NULL)
		{
			printf("Do you want to delete another number from the list?	");
			scanf("%s", userAns);
			if (strcmp(userAns, "y") == 0 || strcmp(userAns,"Y") == 0 || strcmp(userAns,"Yes") == 0 ||
			strcmp(userAns, "YES") == 0 || strcmp(userAns, "yes") == 0)
			{
				userDelete = TRUE;
			}
			else
			{
				userDelete = FALSE;
			}
		}
		
	}
	return 0;
}
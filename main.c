#include <stdlib.h>
#include <stdio.h>
#include "list.h"

MAIN
{
	char fname[20];
	printf("Please enter a file name or a path to a file: ");
	scanf("%s", fname);

	FILE *data = fopen(fname, "rt");

	int value;
	fscanf(data, "%d", &value);
	while (!feof(data))
	{
		printf("%d", value);
		fscanf(data, "%d", &value);	
	}
	return 0;
}
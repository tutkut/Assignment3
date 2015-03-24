#include <stdlib.h>
#include <stdio.h>

#define BOOLEAN int
#define TRUE 1
#define FALSE 0
#define ADD void add(int)
#define PRINT void prettyPrint()
#define DELETE BOOLEAN delete(int numDelete)
#define MAIN int main(void)

typedef struct NODE
{
	int val;
	struct NODE* next;
}aNode;

#include <stdlib.h>
#include <stdio.h>


#define BOOLEAN int
#define TRUE 1
#define FALSE 0

typedef struct NODE aNode;
void prettyPrint();
void add(int value);
BOOLEAN delete(int numDelete);


extern aNode* trail;
extern aNode* head;

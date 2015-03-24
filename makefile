objects = main.o list.o
coptions = -Wall -g -ggdb

LinkedList : ${objects}
	gcc ${coptions} -o List ${objects}
main.o : main.c list.h
	gcc -c ${coptions} main.c
list.o : list.c list.h
	gcc -c ${coptions} list.c
clean :
	rm -f List ${objects}
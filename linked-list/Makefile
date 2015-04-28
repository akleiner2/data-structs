#MAKEFILE FOR EVERYTHING

all: test 

test: test.o linked_list.o
	gcc -Wall test.o linked_list.o -o test

linked_list.o:
	gcc -Wall -c linked_list.c -o linked_list.o

test.o: 
	gcc -g -Wall -c ll_main.c -o test.o

clean: 
	rm -rf *.o test 
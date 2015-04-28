all: test 

test: test.o stack.o
	gcc -Wall test.o stack.o -o test

stack.o:
	gcc -Wall -c stack.c -o stack.o

test.o: 
	gcc -g -Wall -c stack_main.c -o test.o

clean: 
	rm -rf *.o test 
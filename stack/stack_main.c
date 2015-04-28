#include "stack.h"

#include <stdlib.h> 
#include <stdio.h>

int main() { 
	stack s; 

	stack_init(&s); 

	int x = 5; 
	int y = 6; 
	int z = 7; 

	stack_push(&s, &x); 
	stack_push(&s, &y);
	stack_push(&s, &z);

	printf("Stack pop: %d\n", *(stack_pop(&s))); 
	printf("Stack pop: %d\n", *(stack_pop(&s))); 
	printf("Stack pop: %d\n", *(stack_pop(&s))); 

	printf("Stack size: %d\n", stack_size(&s));

	return 0;
}
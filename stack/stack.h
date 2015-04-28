#ifndef STACK_H_
#define STACK_H_

/* The basic data structure for a stack */ 

typedef struct __stack__{
	int ** items;  // dynamic array of ints in the stack 
	int size; // current number of elements in the stack
	int max_size; // size of items array (maximum current size of stack)
} stack;


// initalize memory for the stack 
void stack_init(stack* s);
// push an item onto the stack  
void stack_push(stack* s, int val);
// pop an item off of the stack 
int* stack_pop(stack* s); 
// look at the top of stack without popping 
int* stack_peek(stack* s);
// get stack size 
int stack_size(stack* s);
// update stack size 
int stack_update(stack* s);
// free allocated memory from the stack 
void stack_destroy(stack* s);

#endif
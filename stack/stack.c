#include "stack.h"
#include <stdlib.h>


void stack_init(stack* s) {
	if (s == NULL) return; 
	s->size = 0; 
	s->max_size = 10; 
	s->items = malloc(s->max_size * sizeof(int*)); // allocate the dynamic array properly
}

// returns size of current stack 
int stack_size(stack* s) { 
	return s->size; 
}

// push an item onto the stack 
void stack_push(stack* s, int* val) { 
	// if we've already reached our max size, resize the whole stack 
	if (s->size == s->max_size) stack_update(s); 
	int index = s->size; 
	s->items[index] = val; 
	// update the current size of the stack 
	s->size++;
} 

// pop an item off the stack
int* stack_pop(stack* s) { 
	if (stack_size(s) == 0) { 
		return NULL; 
	}
	else { 
		int* return_val = s->items[s->size-1]; 
		s->items[s->size-1] = NULL; 
		s->size--; 
		return return_val;
	}
}

// look at topmost item without popping it 
int* stack_peek(stack* s) { 
	if (stack_size(s) == 0) return NULL; 
	return s->items[s->size-1];
}

// increase the max_size of a stack 
void stack_update(stack* s) { 
	s->max_size = s->max_size * 2; 
	s->items = realloc(s->items, s->max_size * sizeof(int*));
}

void stack_destroy(stack* s) { 
	free(s->items);
}
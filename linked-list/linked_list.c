#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

void list_init(list_t* list) { 
	head = NULL; 
 	size = 0;
}

void list_destroy(list_t* list) { 
	int count = 0; 
	while (count < list->size) { 
		remove_at_index(list, count); 
		count++; 
	}
}

int is_empty(list_t* list) { 
	return list == 0 ? 1 : 0;
}

int get_size(list_t* list) { 
	return list->size;
}

//PRIVATE
node_t* get_head(list_t* list){ 
	return list->head; 
}

node_t * remove_at_index(list_t* list, int i) { 
	if (i > size(list)) return NULL; 
	// TODO: come back to this
	node_t* temp = get_head(list);
	int count = 0; 
	while (count < i - 1) { // get the one-previous node
		temp = temp->next; 
		count++; 
	}
	
	node_t* return_node = temp->next; 
	temp->next = temp->next->next; 
	list->size --; 
	return return_node;
}





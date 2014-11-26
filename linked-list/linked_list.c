#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

//PRIVATE
node_t* get_head(list_t* list){ 
	return list->head; 
}


//PRIVATE
int get_size(list_t* list) { 
	return list->size;
}

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
	return get_size(list) == 0 ? 1 : 0;
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
	list->size--; 
	return return_node;
}

void print_list(list_t* list){ 
	node_t* head = get_head(list);
	while(head->next != NULL) { 
		printf("%d", head->val);
		printf(" %s", " ->");
	}

	printf("%d", head->val); 
	printf(" %s", " -> NULL");

}

// 8 -> 2 -> 5 ; add(4, 1)
void add_at_index(list_t* list, node_t* val, int i){
	if (i > get_size(list)) return; 
	node_t* head = get_head(list);
	int index = 0; 
	while(index < i - 1) { 
		index++; 
		head = head->next;
	}

	val->next = head->next; 
	head->next = val; 
}
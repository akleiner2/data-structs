#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

int main(int argc, char ** argv) { 
	list_t * list; 
	list_init(list);

	node_t * node1 = malloc(sizeof(node_t));
	node1->val = 5;
	add_at_index(list, node1, 0);
	print_list(list);

	node_t* node2 = malloc(sizeof(note_t));
	add_at_index(list, node2, 1);
	print_list(list);

	node_t* node3 = remove_at_index(list, 1);
	printf("%d", node3->val);
	print_list(list);

	node_t* node4 = remove_at_index(list, 0);
	return 0;
}
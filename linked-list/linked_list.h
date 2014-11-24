/* 
 * A basic singly-linked list with a head pointer 
 * - Allen Kleiner, 2014
*/  

/* The node of a linked-list.*/ 
typedef struct __node__ { 
 	int val; 
 	struct __node__ next*; 
 } node_t; 

typedef struct __list__ { 
	struct __node__ head*; 
	int size; 
} list_t;

/*
 *  Allocates appropriate memory for the list. 
 * 	Always should be called before using the list object.
 * 	@param list_t* list - the list object
 * 	@return void
 */ 
void list_init(list_t * list); 

/*
 *  Cleans up all allocated memory from the list. 
 *	Always should be called at the end of the execution cycle. 
 *  @param list_t* list - the list object
 * 	@return void
 */
void list_destroy(list_t * list);

/*
 * Add a node at a given place in the list.
 * @ param list_t* list - the list object; node_t* val - the node 
 * to be inserted; int index - index to insert a node
 * @return void
 */
void add_at_index(list_t * list, node_t * val, int index); 

/* 
 * Remove a node at a given index in the list.
 * @param list_t* list - the list object; int index - the index
 * at which the ndoe is to be removed 
 * @return the node which is removed
 */
node_t* remove_at_index(list_t * list, int index);

/* 
 * Returns the current size of the list for easy iteration.
 * @param list_t* list - the list object
 * @return the size of the list
 */
int list_size(list_t * list);

/* 
 * Prints out the list in the following format: 
 * 3 -> 5 -> 6 -> 8 -> NULL
 * @param list_t* list - the list object
 * @return void
 */
void print_list(list_t * list);

/* 
 * Function to check if the current list is empty
 * @param list_t* list - the list object
 * @return int - true (1) or false (0) if the list is empty.
 */

int is_empty(list_t * list);
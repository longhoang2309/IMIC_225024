#include"linked_list.h"
#include<malloc.h>
void create_linked_list(linked_list_t* ll)
{
	ll->root_node = 0;
	ll->len = 0;
}

int get_len(linked_list_t* ll)
{
	return ll->len;
}

void add_node(linked_list_t* ll, int val)
{
	node_t* next_node = malloc(sizeof(node_t));
	if (next_node == NULL) {
		return;
	}
	next_node->value = val;
	next_node->next_add = NULL;

	if (ll->root_node == NULL) {
		ll->root_node = next_node;
	}
	else {
		node_t* current = ll->root_node;
		while (current->next_add != NULL) {
			current = (node_t*)current->next_add;
		}
		current->next_add = next_node;
	}

	ll->len++;
}

void insert_node(linked_list_t* ll, int val, int index)
{
	if (index < 0 || index > ll->len) {
		printf("Index out of bounds\n");
		return;
	}
	node_t* new_node = malloc(sizeof(node_t));
	if (new_node == NULL) 
	{
		printf("Memory allocation failed\n");
		return;
	}
	new_node->value = val;
	new_node->next_add = NULL;

	if (index == 0) 
	{
		new_node->next_add = ll->root_node;
		ll->root_node = new_node;
	}
	else 
	{
		node_t* prev = ll->root_node;
		for (int i = 0; i < index - 1; i++) 
		{
			prev = (node_t*)prev->next_add;
		}

		new_node->next_add = prev->next_add;
		prev->next_add = new_node;
	}

	ll->len++;
}

int Get_Value_Index(linked_list_t* ll, int index)
{
	if (index < 0 || index >= ll->len) {
		printf("Index out of bounds\n");
		return -1;
	}

	node_t* current = ll->root_node;
	for (int i = 0; i < index; i++) {
		current = (node_t*)current->next_add;
	}

	return current->value;
}


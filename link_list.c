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
	if (next_node == NULL)
	{
		return;
	}
	next_node->value = val;

	if (ll->len == 0)
	{
		ll->root_node = next_node;
	}
	else
	{
		ll->root_node[ll->len - 1].next_add = next_node;
	}
	ll->len++;
}

int Get_Value_Index(linked_list_t* ll, int index)
{
	return ll->root_node[index - 1].value;
}
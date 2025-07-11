#pragma once
typedef struct
{
	int value;
	void* next_add;
}node_t;

typedef struct
{
	node_t* root_node;
	int len;
}linked_list_t;

void create_linked_list(linked_list_t* t);
int get_len(linked_list_t* t);
void add_node(linked_list_t* t, int value);
int Get_Value_Index(linked_list_t* ll, int index);
void insert_node(linked_list_t* ll, int val, int index);
void remove_node(linked_list_t* ll, int index);
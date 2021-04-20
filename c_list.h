#pragma once
#include "node.h"
#include <iostream>
class c_list
{
private:
	node* first;
	node* last;
public:
	int size = 0;
	c_list(node* = nullptr, node* = nullptr);
	void show() const;
	void insert( node * );
	void p_all() const;
	void remove_node( node* );
	node* get_first();
	int get_index(node*);
	node* get_node(int);
	void josephus(int, node*);
	void populate_list(int);
};

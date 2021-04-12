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
	void print() const;
	void list_3rd( node* ) const;
	void remove_node( node * );
};

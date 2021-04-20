#include "c_list.h"
void c_list::remove_node(node* to_remove)
{
	if (size == 0) return;
	if (to_remove == first)
	{
		first->_next()->_prev(first->_prev());
		first->_prev()->_next(first->_next());
		first = first->_next();
		size--;
	}
	else if (to_remove == last)
	{
		last->_next()->_prev(last->_prev());
		last->_prev()->_next(last->_next());
		last = last->_prev();
		size--;
	}
	else if (size != 1)
	{
		to_remove->_next()->_prev(to_remove->_prev());
		to_remove->_prev()->_next(to_remove->_next());
		to_remove = to_remove->_next();
		size--;
	}
}
int c_list::get_index(node* to_get)
{
	int i = 0;
	node* t = first;
	while (i < size)
	{
		if (to_get == t) return i;
		to_get = to_get->_next();
		i++;
	}
}
node* c_list::get_node(int index)
{
	node* t = first;
	int i = 0;
	while (i < index)
	{
		t = t->_next();
		i++;
	}
	return t;
}
node* c_list::get_first()
{
	return first;
}
void c_list::p_all() const
{
	if (size == 0) return;
	node* show;
	int i = 0;
	if (size != 0)
	{
		show = first;
		while (i < size)
		{
			std::cout << show->show() << "\t";
			show = show->_next();
			i = i + 1;
		}
	}
	else std::cout << "Empty";
};
void c_list::show() const {
	if (size == 0) return;
	std::cout << "First element in list : \n" << first->show() << "\nLast element in list : \n" << last->show() << "\nSize of list: \n" << size << std::endl;
}
c_list::c_list(node* f, node* l) {
	first = f;
	last = l;
	if ((first != nullptr) || (last != nullptr)) size = size + 1;
	if ((first != nullptr) && (last != nullptr)) {
		first->_next(last);
		last->_prev(first);
		first->_prev(last);
		last->_next(first);
		size = size + 1;
	}
}

void c_list::insert(node* to_add) 
{
	if (size == 0) 
	{
		first = to_add;
		size = size + 1;
	}
	else 
	{
		if (last == nullptr)
		{
			last = to_add;
			first->_next(last);
			last->_prev(first);
			last->_next(first);
			first->_prev(last);
			size = size + 1;
		}
		else {
			to_add->_prev(last);
			last->_next(to_add);
			last = to_add;
			first->_prev(last);
			last->_next(first);
			size = size + 1;
		}
	}
}
void c_list::josephus(int key, node* given) 
{
	
	node* temp = new node;
	temp = given;
	while (size > 1) 
	{
		for (int i = 0; i < key - 1; i++)
		{
			temp = temp->_next();
		}
		temp = temp->_next();
		remove_node(temp->_prev());
	}
}
void c_list::populate_list(int _size) 
{
	for (float i = 1.0f; i <= _size; i++)
	{
		node* t = new node;
		*t = i;
		this->insert(t);
	}
}
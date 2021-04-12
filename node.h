#pragma once
class node
{
private:
	float data;
public:
	node* next;
	node* prev;
	node( float = -1.0f , node* = nullptr , node* = nullptr ); // default constructor 
	node(const node&); // copy constructor
	//~node();
	float show() const;
};
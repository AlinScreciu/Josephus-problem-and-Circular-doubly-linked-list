#include "node.h"
#include <iostream>

node::node(float data1, node* n, node* p) {
    data = data1;
    next = n;
    prev = p;
}
node::node(const node& to_copy) {
    next = to_copy.next;
    prev = to_copy.prev;
    data = to_copy.data;
}
float node::show() const {
    return data;
}

void node::set(float data1)
{
    data = data1;
}



node* node::operator = (node* other)
{
    if (this != other)
    {
        data = other->data;
    }
    return this;
}
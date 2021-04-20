#pragma once
class node
{
private:
    float data;
    node* next;
    node* prev;
public:
    node* operator=(node*);
    node(float = -1.0f, node* = nullptr, node* = nullptr); // default constructor 
    node(const node&); // copy constructor
    node* _next();
    node* _prev();
    void _next(node*);
    void _prev(node*);
    float show() const;
    void set(float);
};
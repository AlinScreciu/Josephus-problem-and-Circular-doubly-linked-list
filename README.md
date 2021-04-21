# Josephus-problem-and-Circular-doubly-linked-list
Solving the Josephus problem using a circular list

The indentation style is a variant of Allman's style;
I chose to implement the circular list a doubly linked circular list, 
mostly because of how I implemented the solution for the Josephus problem.
The list was implemented using 2 classes, c_list and node.
The classes have their definitions in headers, and the implementations a .cpp file.
The node class holds 3 private attributes, data, next, and prev, a float and 2 node pointers.
It has a default constructor which sets the data as -1 and the next and prev as null if they are not specified,
a copy constructor. I've also added an overload for the " = " operator as this kept the code smaller and easier to read.
The rest of the methods are setters and getters as the attributes are all private.
Similary the c_list class, has 3 private attributes, first, last and size, 2 node pointers and a integer, in that order.
The constructor initializes the list with first,last as null if not specified, and the size as 0;
The implemented methods are the following:
1. show, it prints the first and last element, and the size of the list. Was useful in debugging 
2. insert, inserts nodes in the list.
3. p_all, prints all the elements in the list
4. remove_node, removes a node if it is in the list
5. populate_list, fills the list with n element
6. list_nth, list the n-th node from a given one
7. josephus, which solves the josephus problem in this list from a given node and key ( the jump ) 
8. get_node, gets node at index given
9. get_index, gets the index of a given node
10. size, returns the size of the list
11. get_first(), returns pointer to the first node

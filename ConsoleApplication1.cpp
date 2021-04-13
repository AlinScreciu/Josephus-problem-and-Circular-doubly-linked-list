#include "c_list.h"
int main()
{   
	node a, b, c, d;
	a = 10;
	b = 20;
	c = 30;
	d = 40;
	c_list l;
	l.insert(&a);
	l.insert(&b);
	l.insert(&c);
	l.insert(&d);
	l.print();
	std::cout << std::endl;
	l.remove_node(&c);
	l.print();
	l.list_3rd(&b);

}

#include "c_list.h"

void c_list::remove_node(node* to_remove) {
    to_remove->prev->next = to_remove->next;
    to_remove->next->prev = to_remove->prev;
    to_remove->next = nullptr;
    to_remove->prev = nullptr;
    size = size - 1;
}
void c_list::list_3rd(node* given) const {
    int  i = 0;
    node* third = given; 
    while (i < 3) {
        third = third->next;
        if (i == 2) std::cout << third->show();
        i++;
    }
}
void c_list::print() const {
    node* show;
    int i = 0;
    if (size != 0) {
        show = first;
        while (i < size) {
            std::cout << show->show() << "\n";
            show = show->next;
            i = i + 1;
        }
    }
};
void c_list::show() const {
	std::cout << "First element in list : \n" << first->show() << "\nLast element in list : \n" << last->show() << "\nSize of list: \n" << size << std::endl;
} 
c_list::c_list(node* f, node* l) {
	first = f;
	last = l;
	if ((first != nullptr) || (last != nullptr)) size = size + 1;
    if ((first != nullptr) && (last != nullptr)) {
        first->next = last;
        last->prev = first;
        first->prev = last;
        last->next = first;
        size = size + 1; 
    }
}
void c_list::insert(node* to_add) {
    if (size == 0) {
        first = to_add;
        size = size + 1;
    }
    else {
        if (last == nullptr)
        {
            last = to_add;
            first->next = last;
            last->prev = first;
            last->next = first;
            first->prev = last;
            size = size + 1;
        }
        else {
            to_add->prev = last;
            last->next = to_add;
            last = to_add;
            first->prev = last;
            last->next = first;
            size = size + 1;
        }
    }
}
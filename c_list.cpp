#include "c_list.h"
void c_list::remove_node(node* to_remove) {
    if (size == 0) return;
    if (to_remove == first) {
        first->next->prev = first->prev;
        first->prev->next = first->next;
        first = first->next;
        size--;
    }
    else if (to_remove == last) {
        last->next->prev = last->prev;
        last->prev->next = last->next;
        last = last->prev;
        size--;
    }
    else if ( size != 1 ) {
        to_remove->next->prev = to_remove->prev;
        to_remove->prev->next = to_remove->next;
        to_remove = to_remove->next;
        size--;
    }
}
node* c_list::list_3rd(node* given) const {
    if (size != 0) {
        int  i = 0;
        node* third;
        third = given;
        third->next = given->next;
        while (i < 3) {
            third = third->next;
            if (i == 2) return third;
            i++;
        }
    }
}
void c_list::p_all() const {
    if (size == 0) return;
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
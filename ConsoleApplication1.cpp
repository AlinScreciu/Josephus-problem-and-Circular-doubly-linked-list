#include "c_list.h"
#include <conio.h>
#include <Windows.h>
using namespace std;
void menu() 
{
   /* int size = 0;
    c_list(node * = nullptr, node * = nullptr);
    void show() const;
    void insert(node*);
    void p_all() const;
    void remove_node(node*);
    node* get_first();
    int get_index(node*);
    node* get_node(int);
    void josephus(int, node*);
    void populate_list(int);
    void list_nth(int, node*);*/
    cout << "Options:\n"
        "0. Exit.\n"
        "1. Insert an element in the list.\n"
        "2. Populate elements with n elements.\n"
        "3. Show all elements of list.\n"
        "4. List n-th element from given node.\n"
        "5. Remove node at given index.\n"
        "6. Josephus solution for a given node and key\n";
}
int main() 
{
    c_list test;
    int c;
    node* temp;
    while (1) {
        menu();
        cin >> c;
        switch (c) {
        case 0:
            return 0;
            break;
        case 1:
            float en;
            cout << "Enter the data ( a float )\n";
            cin >> en;
            temp = new node;
            *temp = en;
            test.insert(temp);
            break;
        case 2:
            int n1;
            cout << "Enter the n:\n";
            cin >> n1;
            test.populate_list(n1);
            break;
        case 3:
            test.p_all();
            break;
        case 4:
            test.p_all();
            int index;
            cout << "Input the index of the chosen node\n";
            cin >> index;
            cout << "Input the jump\n";
            int n;
            cin >> n;
            test.list_nth(n, test.get_node(index));
            break;
        case 5:
            int index1;
            test.p_all();
            cout << "Choose the index of the node you want to remove:\n";
            cin >> index1;
            test.remove_node(test.get_node(index1));
            break;
        case 6:
            int key,i;
            test.p_all();
            cout << "Choose the starting node: ( input the index ) :" << endl;
            cin >> i;
            cout<<"Input the key (number of skips)"<<endl;
            cin >> key;
            test.josephus(key, test.get_node(i));
            cout << "The surviving node is:";
            test.p_all();
            break;
        }
    }
    return 0;
} 
 

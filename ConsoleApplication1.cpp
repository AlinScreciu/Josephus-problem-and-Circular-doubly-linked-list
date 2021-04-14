#include "c_list.h"
#include <Windows.h>
using namespace std;

int main()
{ // TO DO - > MAIN LOOPd
    int sizeNR, i = 0;
    cout << "how many elements you want to add?\n"; cin >> sizeNR;
    c_list datab;
    float data;
    node* array = new node[sizeNR];
    while (i < sizeNR)
    {
        cin >> data;
        node* temp = new node;
        *temp = data;
        array[i] = temp;
        datab.insert(&array[i]);
        i++;
    }

    datab.remove_node(datab.list_3rd(&array[0]));
    system("cls");
    datab.p_all();
    return 0;
}
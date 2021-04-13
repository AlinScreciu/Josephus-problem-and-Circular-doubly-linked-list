#include "c_list.h"
#include <Windows.h>
using namespace std;

int main()
{
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
    system("cls");
    datab.print();
    datab.remove_node(datab.list_3rd(&array[0]));
    datab.print();


    /*l.insert
    * show
    * print
    * list_3rd
    * remove_node
    */

}
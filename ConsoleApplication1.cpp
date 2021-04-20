#include "c_list.h"
#include <Windows.h>
using namespace std;
void menu() 
{
    cout << "Options:\n"
            "1.Insert an element to the list:";
}
int main() 
{ 
    //menu();
    c_list test;
    test.populate_list(5);
    test.p_all();
    test.josephus(2, test.get_node(0));
    cout << endl;
    test.p_all();
    return 0;
} 
 

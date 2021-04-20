#include "c_list.h"
#include <Windows.h>
using namespace std;



int main() 
{ 
    c_list test;
    for (float i = 1.0f; i <= 41.0f; i++) 
    {
        node *t = new node;
        *t = i;
        test.insert(t);
    }
    test.josephus(3);
    test.p_all();
    return 0;
} 
 

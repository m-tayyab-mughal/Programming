#include <iostream>
#include "DLList.h"
using namespace std;
int main()
{
    DLList list1;
    for (int i{1}; i <= 10; i++)
     {
         list1.InsertAtHead(i*5);
     }
     list1.print();
    list1.DeleteNode(30);
     list1.print();
     list1.ReversePrint();
    return 0;
}

#include <iostream>
#include "SLList.h"
using namespace std;

int main()
{
    SLList list;
    
    cout << "Checking if list is empty..." << endl;
    if (list.isEmpty()) {
        cout << "List is empty!" << endl;
    } else {
        cout << "List is not empty!" << endl;
    }

    cout << "Adding elements to the list..." << endl;
    list.insertatHead(10);
    list.insertatTail(20);
    list.insertatTail(30);
    list.insertatHead(50);
    list.insertatHead(60);
    list.insertatHead(125);
    list.insertatHead(56);
    list.insertatHead(75);

    
    cout << "Current list: ";
    list.display();
    cout << endl;

    cout << "Checking if list is empty again..." << endl;
    if (list.isEmpty()) {
        cout << "List is empty!" << endl;
    } else {
        cout << "List is not empty!" << endl;
    }

    cout << "Searching for elements..." << endl;
    
    if (list.find(10)) {
        cout << "10 is in the list!" << endl;
    } else {
        cout << "10 is not in the list!" << endl;
    }

    if (list.find(25)) {
        cout << "25 is in the list!" << endl;
    } else {
        cout << "25 is not in the list!" << endl;
    }

    cout << "Deleting from head..." << endl;
    list.deleteatHead();
    cout << "Deleted from head." << endl;

    cout << "List after deletion: ";
    list.display();
    cout << endl;

    cout << "Deleting from tail..." << endl;
    list.deleteatTail();
    
    cout << "List after deleting from tail: ";
    list.display();
    cout << endl;

    cout << "Deleting Node..." << endl;
    list.deletenode(125);
    
    cout << "List after deleting Node: ";
    list.display();
    cout << endl;

    cout << "Current list: ";
    list.display();
    cout << endl;

    cout << "Reverse list: ";
    list.reverse();
    list.display();
    cout << endl;

    list.clearlist();
    cout << "List after Clear: ";
    list.display();
    cout << endl;
    
    return 0;
}

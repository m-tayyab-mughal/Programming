#ifndef _DLSLLIST_
#define _DLSLLIST_
#include "DLNode.h"
class DLList
{
public:
    DLNode *Head, *Tail;

public:
    DLList &operator=(const DLList &);
    void InsertAtHead(int _data);
    void InsertAtTail(int _data);
    void DeleteNode(int key);
    DLList(const DLList &);
    void deleteAtHead();
    void deleteAtTail();
    void ReversePrint();
    bool find(int key);
    bool DLListEmpty();
    void Reverse();
    void print();
    int length();
    void Clear();
     DLList();
    ~DLList();

    // void DeleteNode(int key);
};
#endif
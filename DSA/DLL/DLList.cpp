#include <iostream>
using namespace std;
#include "DLList.h"
DLList::DLList()
{
    Head = Tail = nullptr;
}
DLList::DLList(const DLList &obj)
{
    if (!obj.Head)
        return;
    DLNode *ptr{obj.Head->Next};
    DLNode *temp{nullptr};
    Head = new DLNode(obj.Head->data);
    DLNode *ptr1{Head};
    while (ptr)
    {
        temp = new DLNode(ptr->data);
        ptr1->Next = temp;
        temp->Prev = ptr1;
        ptr = ptr->Next;
        ptr1 = ptr1->Next;
    }
}
DLList &DLList::operator=(const DLList &obj)
{
    if (this != &obj)
    {
        if (!obj.Head)
            return *this;
        DLNode *ptr{obj.Head->Next};
        DLNode *temp{nullptr};
        Head = new DLNode(obj.Head->data);
        DLNode *ptr1{Head};
        while (ptr)
        {
            temp = new DLNode(ptr->data);
            ptr1->Next = temp;
            temp->Prev = ptr1;
            ptr = ptr->Next;
            ptr1 = ptr1->Next;
        }
    }
    return *this;
}
void DLList::InsertAtHead(int _data)
{

    DLNode *ptr = new DLNode(_data);
    if (Head)
    {
        ptr->Next = Head;
        Head->Prev = ptr;
    }
    Head = ptr;
    if (!Tail)
    {
        Tail = Head;
    }
}
void DLList::print()
{
    DLNode *ptr{Head};
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->Next;
    }
    cout << '\n';
}
void DLList::ReversePrint()
{
    DLNode *ptr{Tail};
    while (ptr)
    {
        cout << ptr->data << ' ';
        ptr = ptr->Prev;
    }
    cout << '\n';
}
void DLList::InsertAtTail(int _data)
{
    DLNode *temp = new DLNode(_data);
    temp->Prev = Tail;
    if(Tail)
    Tail->Next = temp;
    Tail = temp;
    if (!Head)
        Head = Tail;
}
void DLList::deleteAtHead()
{
    if (Head)
    {

        DLNode *ptr = Head->Next;
        if (ptr)
            ptr->Prev = nullptr;
        delete Head;
        if (Head == Tail)
            Tail = nullptr;
        Head = ptr;
    }
}
void DLList::deleteAtTail()
{
    if (Tail)
    {
        DLNode *ptr = Tail->Prev;
        if (ptr)
            ptr->Next = nullptr;
        delete Tail;
        if (Head == Tail)
            Head = nullptr;
        Tail = ptr;
    }
}
bool DLList::find(int key)
{
    DLNode *ptr = Head;
    for (; ptr && ptr->data != key; ptr = ptr->Next)
        ;
    return (ptr != nullptr);
}
int DLList::length()
{
    int length{};
    DLNode *ptr{Head};
    while (ptr)
    {
        ++length;
        ptr = ptr->Next;
    }
    return length;
}
bool DLList::DLListEmpty()
{
    return (!Head);
}
void DLList::Clear()
{
    DLNode *ptr = Head;
    while (ptr)
    {
        ptr = Head->Next;
        delete Head;
        Head = ptr;
    }
    Tail = nullptr;
}
DLList::~DLList()
{
    if (Head)
        Clear();
}
void DLList::Reverse()
{

    DLNode *ptr{Tail->Prev};
    DLNode *temp{};
    if(Head)
    while (Tail!=Head)
    {   temp=ptr;
        Tail->Next=ptr;
        Tail->Prev=nullptr;
        ptr->Prev=Tail;
        ptr=temp->Prev;
        temp= temp->Prev;
    }
    
}
void DLList::DeleteNode(int key)
{
    DLNode *current{Head};
    DLNode *previous{nullptr};
    while (current)
    {

        if (current->data == key)
        {

            if (previous)
            {
                DLNode *temp{current->Next};
                previous->Next = temp;
                if(temp)
                temp->Prev = previous;
            }
            if (current == Head)
            {
                Head = current->Next;
                if(Head)
                Head->Prev = nullptr;
            }
            if (current == Tail)
                Tail = previous;
            delete current;
            break;
        }
        previous = current;
        current = current->Next;
    }
}
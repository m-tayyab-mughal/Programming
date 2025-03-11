#include "SLList.h"
#include <iostream>
using namespace std;

bool SLList::isEmpty()
{
    return head == nullptr;
}

bool SLList ::find(int num)
{
    Node *temp{head};
    while (temp)
    {
        if(temp->data==num)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void SLList::insertatHead(int num)
{
    Node* newNode = new Node(num);
    
    if(head == nullptr) { 
        head = tail = newNode;
    }
    else {
        newNode->next = head;  
        head = newNode;        
    }
}

void SLList::insertatTail(int num)
{
    Node *newNode = new Node(num);
    if(head==nullptr)
    {
        head=tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=tail->next;
    }
}

void SLList::display()
{
    Node *temp=head;
    if(isEmpty())
    {
        cout<<"List is Empty"<<endl;
    }
    while (temp)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}

void SLList::deleteatHead()
{
    if(isEmpty())
    {
        return;
    }
    Node *temp{head};
    if(head==tail)
    {
        head=tail=nullptr;
    }
    else{
        head=head->next;
        delete temp;
        return ;
    }
}
void SLList::deleteatTail()
{   
    if(isEmpty())
    {
        return;
    }
    if(head == tail) {
        delete head;
        head = tail = nullptr;
        return;
    }
    Node *temp{head};
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    tail=temp;
}

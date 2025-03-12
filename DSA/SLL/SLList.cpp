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

void SLList::clearlist()
{
    Node *curr = head;
    while (curr) 
    {
        Node *temp = curr;
        curr = curr->next;  
        delete temp;        
    }

    head = nullptr;
    tail = nullptr;
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
        tail=newNode;
    }
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
        delete temp;
        return;
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

void SLList::deletenode(int num)
{
    if (isEmpty())
    {
        return;
    }
    if (head==tail)
    {
        if (head->data==num)
        {
            head=tail=nullptr;
        }
        else
        {
            return;
        }
    }
    if (head->data==num){
        Node *temp{head};
        head= temp->next;
        delete temp;
        return;
    }

    Node *pre{head};
    Node *curr{head->next};
    while (curr)
    {
        if(curr->data==num)
        {
            pre->next=curr->next;
            if(curr==tail){
                tail=pre;
            }
            delete curr;
            return;
        }
        pre=curr;
        curr=curr->next;
    }
    
}
void SLList::deleteallnode(int num)
{
    if (isEmpty()) {
        return;
    }
    
    Node *pre = nullptr;
    Node *curr = head;

    while (curr) 
    {
        if (curr->data == num)
        {
            if (curr == head)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
                if (head == nullptr) { 
                    tail = nullptr;
                }
                curr = head; 
            }
            else if (curr == tail)  
            {
                Node *temp = tail;
                tail = pre;
                tail->next = nullptr;
                delete temp;
                curr = nullptr; 
            }
            else  
            {
                pre->next = curr->next;
                Node *temp = curr;
                curr = curr->next;
                delete temp;
            }
        }
        else  
        {
            pre = curr;
            curr = curr->next;
        }
    }
}
void SLList::reverse()
{
    if (isEmpty() || head == tail)
        return;

    Node *prev = nullptr;
    Node *curr = head;
    Node *next = nullptr;

    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    tail = head;  
    head = prev;  
}



SLList::SLList(const SLList &obj)
{
    head = nullptr;
    tail = nullptr;

    if (obj.head == nullptr) {  
        return;
    }

    Node *curr = obj.head;
    while (curr) {
        Node *newNode = new Node();
        newNode->data = curr->data;
        newNode->next = nullptr;

        if (head == nullptr) {  
            head = newNode;
            tail = newNode;
        } else { 
            tail->next = newNode;
            tail = newNode;
        }

        curr = curr->next;  
    }
}

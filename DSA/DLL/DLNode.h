#ifndef _DLNODE_
#define _DLNODE_
class DLNode
{   public:
    int data;
    DLNode *Prev;
    DLNode *Next;
    friend class DLList;
    DLNode(int _data, DLNode *previous= nullptr,DLNode *next = nullptr);
};
#endif
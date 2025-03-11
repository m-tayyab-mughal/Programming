class SLList
{
    struct Node
    {
        int data;
        Node *next;
        Node(int _data=0, Node *ptr=nullptr) : data(_data), next(ptr) {}
    };
    Node *head;
    Node *tail; 
    public:
    SLList(): head(nullptr), tail(nullptr) {}
    void insertatHead(int);
    void insertatTail(int);
    void deleteatHead();
    void deleteatTail();
    void deletenode(int);
    void display();
    bool isEmpty();
    bool find(int);
    

};

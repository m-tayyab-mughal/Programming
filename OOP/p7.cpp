
#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    float price;

    Book(string title, string author, float price)
    {
        this->title = title;
        this->author = author;
        this->price = price;
    }
    void display ()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    Book book("C++ Programming", "Bjarne Stroustrup", 1550.50);
    book.display();
    return 0;
}

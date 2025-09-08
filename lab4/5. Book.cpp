#include <iostream>
using namespace std;

class Book {
private: 
    string title;
    string author;
    string ISBN;
public:
    void setTitle(string titleName) {
        title = titleName;
    }

    string getTitle() {
        return title;
    }

    void setAuthor(string authorName) {
        author = authorName;
    }

    string getAuthor() {
        return author;
    }
    void setISBN(string ISBNName) {
        ISBN = ISBNName;
    }

    string getISBN() {
        return ISBN;
    }

    void display() {
        cout << "Book Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "ISBN : " << ISBN << endl;
    }
};

int main() {
    Book b;
    b.setTitle("Atomic Habits");
    b.setAuthor("James Clear");
    b.setISBN("123DSAE12121");
    b.display();
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Library {
private:
    vector<string> books; 

public:
    void addBook(const string &bookTitle) {
        books.push_back(bookTitle);
        cout << "Book \"" << bookTitle << "\" added to the library." << endl;
    }

    void removeBook(const string &bookTitle) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (*it == bookTitle) {
                books.erase(it);
                cout << "Book \"" << bookTitle << "\" removed from the library." << endl;
                return;
            }
        }
        cout << "Book \"" << bookTitle << "\" not found in the library." << endl;
    }

    void displayBooks() const {
        if (books.empty()) {
            cout << "Library is empty!" << endl;
            return;
        }

        cout << "\nBooks in the Library:\n";
        for (size_t i = 0; i < books.size(); ++i) {
            cout << i + 1 << ". " << books[i] << endl;
        }
    }
};

int main() {
    Library lib;
    int choice;
    string title;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Display Books\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter book title to add: ";
                getline(cin, title);
                lib.addBook(title);
                break;

            case 2:
                cout << "Enter book title to remove: ";
                getline(cin, title);
                lib.removeBook(title);
                break;

            case 3:
                lib.displayBooks();
                break;

            case 4:
                cout << "Exiting Library System. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}



#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Book {
    int accession;
    string title;
    string author;
    int price;
    bool issued;
};

Book input();
void print(const Book&);
void lookTitle();
void lookEnd();

int main() {
    int ch, adder;
    int cnt = 0;
    const int maxBooks = 100;
    string str;
    vector<Book> library;
    int size = 0;

    while (true) {
        cout << "\n\n-------------------------------------------------------------------\n";
        cout << "1. Add book information\n";
        cout << "2. Display book information\n";
        cout << "3. List all books of a given author\n";
        cout << "4. List the title of a specified book\n";
        cout << "5. List total number of books in the library\n";
        cout << "6. List the books in the order of accession number\n";
        cout << "7. Exit\n";
        cout << "-------------------------------------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "\n";

        switch (ch) {
            case 1:
                cout << "How many books do you want to enter: ";
                cin >> adder;
                if (size < maxBooks) {
                    for (int i = 0; i < adder; i++) {
                        cout << "\nEnter data for book " << size + i + 1 << ":\n";
                        library.push_back(input());
                    }
                    size += adder;
                } else {
                    cout << "This program cannot hold more than 100 books.\n";
                }
                break;

            case 2:
                lookTitle();
                for (const auto& book : library) {
                    print(book);
                }
                lookEnd();
                break;

            case 3:
                cout << "Enter Author Name: ";
                cin >> str;
                cnt = 0;
                for (const auto& book : library) {
                    if (book.author == str) {
                        cnt = 1;
                    }
                }
                if (cnt == 0) {
                    cout << "No book found of " << str << " Author.\n";
                } else {
                    lookTitle();
                    for (const auto& book : library) {
                        if (book.author == str) {
                            print(book);
                        }
                    }
                    lookEnd();
                }
                break;

            case 4:
                cout << "Enter Book name: ";
                cin.ignore(); // Clear buffer
                getline(cin, str);
                cnt = 0;
                for (const auto& book : library) {
                    if (book.title == str) {
                        cnt = 1;
                    }
                }
                if (cnt == 0) {
                    cout << "No book found of " << str << " Author.\n";
                } else {
                    lookTitle();
                    for (const auto& book : library) {
                        if (book.title == str) {
                            print(book);
                        }
                    }
                    lookEnd();
                }
                break;

            case 5:
                cout << "Total number of books in the library is: " << size << endl;
                break;

            case 6:
                cout << "Books in Ascending order:\n";
                // Sorting
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size; j++) {
                        if (library[i].accession < library[j].accession) {
                            swap(library[j], library[i]);
                        }
                    }
                }
                // Printing
                lookTitle();
                for (const auto& book : library) {
                    print(book);
                }
                lookEnd();
                break;

            case 7:
                cout << "Exit From Program.\n";
                return 1;

            default:
                cout << "Please enter a valid option.\n";
                break;
        }
    }

    return 0;
}

Book input() {
    Book b;

    up1:
    cout << "Enter book accession number: ";
    cin >> b.accession;
    if (b.accession <= 0) {
        cout << "\nEnter a valid accession number.\n";
        goto up1;
    }

    cout << "Enter book title: ";
    cin.ignore(); // Clear buffer
    getline(cin, b.title);

    cout << "Enter book author: ";
    getline(cin, b.author);

    up2:
    cout << "Enter book price: ";
    cin >> b.price;
    if (b.price < 0) {
        cout << "\nEnter a valid price.\n";
        goto up2;
    }

    up3:
    cout << "Enter 1 if issued, else enter 0: ";
    cin >> b.issued;
    if (b.issued != 1 && b.issued != 0) {
        cout << "\nEnter a valid issued number.\n";
        goto up3;
    }

    return b;
}

void print(const Book& b) {
    cout << "|" << b.accession << "\t\t|" << b.title << "\t\t|" << b.author << "\t\t|" << b.price << "\t\t|" << (b.issued ? "No" : "Yes") << "\t\t|\n";
}

void lookTitle() {
    cout << "---------------------------------------------------------------------------------\n";
    cout << "|accession No.\t|Books Title\t|Author Name\t|Price\t\t|Issued Status\t|\n";
    cout << "---------------------------------------------------------------------------------\n";
}

void lookEnd() {
    cout << "---------------------------------------------------------------------------------\n";
}

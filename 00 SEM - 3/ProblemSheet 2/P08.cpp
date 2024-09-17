/*
 * P08.cpp
 *
 *  Created on: 23-Aug-2024
 *      Author: root
 */
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string name;
    string publisher;
    string author;
    int publicationYear = 0;
    float price;

    void input() {
        cout << endl << "\tEnter the Name of the Book: ";
        cin>>name;

        cout << "\tEnter the Name of Publisher of the Book: ";
        cin>>publisher;

        cout << "\tEnter the Name of Author of the Book: ";
       cin>>author;

        cout << "\tEnter the Publication Year of the Book: ";
        cin >> publicationYear;

        up:
        cout << "\tEnter the Price of the Book: ";
        cin >> price;
        if(price < 0){
        	cout<<"Enter Valid Date !!!\n";
        	goto up;
        }
    }

    void display() const {
        if (publicationYear == 0) {
            cout << "\tFirst Input Book Data!" << endl;
            return;
        }

        cout << "\t" << name << "\t" << publisher << "\t\t" << author << "\t" << publicationYear << "\t\t" << price << endl;
    }

    friend void searchByAuthor(Book books[], int n, string& author);
    friend void searchByBookName( Book books[], int n, string& bookName);
    friend void searchByPublisher( Book books[], int n, string& publisher);
};


int main() {
    int n, k;
    string searchAuthor, searchBookName, searchPublisher;

    cout << endl << "Enter the Number of Books You Want to Add: ";
    cin >> n;
    while (n <= 0) {
        cout << endl << "Invalid Input! Please enter a positive number: ";
        cin >> n;
    }

    Book* books = new Book[n]; // Dynamically allocate to avoid large stack allocation

    while (true) {
        cout << endl << endl;
        cout << "\t\t1. Accept the Input from the User" << endl;
        cout << "\t\t2. Display the Data" << endl;
        cout << "\t\t3. Search Book By Author" << endl;
        cout << "\t\t4. Search Book By Book Name" << endl;
        cout << "\t\t5. Search Book By Publisher" << endl;
        cout << "\t\t6. Exit" << endl;

        cout << endl << "\tEnter your Choice: ";
        cin >> k;

        switch (k) {
        case 1:
            for (int i = 0; i < n; ++i) {
                cout << endl << "Enter Details for Book " << i + 1 << " :" << endl;
                books[i].input();
            }
            break;

        case 2:
            cout << endl << "All Book Details:" << endl << endl;
            cout << "\t" << "Name" << "\t" << "Publisher" << "\t" << "Author" << "\t" << "Pub_year" << "\t" << "Price" << endl << endl;
            for (int i = 0; i < n; ++i) {
                books[i].display();
            }
            break;

        case 3:
            cout << endl << "Enter the Author Name to Search for Books: ";
            cin.ignore(); // To clear the newline character left by previous input
            cin>>searchAuthor;
            searchByAuthor(books, n, searchAuthor);
            break;

        case 4:
            cout << endl << "Enter the Book Name to Search for Books: ";
            cin.ignore(); // To clear the newline character left by previous input
            cin>>searchBookName;
            searchByBookName(books, n, searchBookName);
            break;

        case 5:
            cout << endl << "Enter the Publisher Name to Search for Books: ";
            cin.ignore(); // To clear the newline character left by previous input
            cin>>searchPublisher;
            searchByPublisher(books, n, searchPublisher);
            break;

        case 6:
            delete[] books; // Free dynamically allocated memory
            cout << endl << "Exited!" << endl;
            return 0;

        default:
            cout << endl << "Invalid Input!" << endl;
        }
    }

    return 0;
}

void searchByAuthor( Book books[], int n, string& author) {
    bool found = false;
    cout << endl << "\t" << "Name" << "\t" << "Publisher" << "\t" << "Author" << "\t" << "Pub_year" << "\t" << "Price" << endl << endl;
    for (int i = 0; i < n; ++i) {
        if (books[i].author == author) {
            books[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << endl << "\tSorry! Book is not Found!!" << endl;
    }
}

void searchByBookName( Book books[], int n, string& bookName) {
    bool found = false;
    cout << endl << "\t" << "Name" << "\t" << "Publisher" << "\t" << "Author" << "\t" << "Pub_year" << "\t" << "Price" << endl << endl;
    for (int i = 0; i < n; ++i) {
        if (books[i].name == bookName) {
            books[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << endl << "\tSorry! Book is not Found!!" << endl;
    }
}

void searchByPublisher( Book books[], int n,  string& publisher) {
    bool found = false;
    cout << endl << "\t" << "Name" << "\t" << "Publisher" << "\t" << "Author" << "\t" << "Pub_year" << "\t" << "Price" << endl << endl;
    for (int i = 0; i < n; ++i) {
        if (books[i].publisher == publisher) {
            books[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << endl << "\tSorry! Book is not Found!!" << endl;
    }
}


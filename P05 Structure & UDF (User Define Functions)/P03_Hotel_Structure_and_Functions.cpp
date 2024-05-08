#include <iostream>
#include <string>

using namespace std;

struct hotel {
    string name;
    string address;
    char grade;
    int charge;
    int room;
};

struct hotel input();
void print(const hotel);
void printHeading();
void grade(hotel[], int);
void charge(hotel[], int);
void bubbleSort(hotel[], int);

int main() {
    int size, ch;
    cout << "How Many Hotel Detail information want to enter: ";
    cin >> size;
    hotel h[size];

    // Input
    for (int i = 0; i < size; i++) {
        cout << "\nEnter " << i + 1 << " Hotel data:\n";
        h[i] = input();
    }

    do {
        cout << "\nPress 1: To print out hotels of a given grade in order of charges\n";
        cout << "Press 2: To print out hotels with room charges less than a given value\n";
        cout << "Press 3: Exit\n";
        cout << "\nEnter Here: ";
        cin >> ch;
        cout << "\n\n";
        switch (ch){
            case 1:
                // To print out hotels of a given grade in order of charges.
                grade(h, size);
                break;
            case 2:
                // To print out hotels with room charges less than a given value.
                charge(h, size);
                break;
            case 3:
                break;
            default:
                cout << "Enter Valid Choice.\n";
        }
    } while (ch != 3);

    return 0;
}

struct hotel input() {
    hotel h;
    cout << "Enter Hotel Name: ";
    cin >> h.name;
    cout << "Enter Hotel address: ";
    cin >> h.address;
    cout << "Enter Grade: ";
    cin >> h.grade;
    up1:
    cout << "Enter Room Charge: ";
    cin >> h.charge;
    if (h.charge <= 0) {
        cout << "\nEnter Valid Charge\n";
        goto up1;
    }
    up2:
    cout << "Enter Room Number: ";
    cin >> h.room;
    if (h.room <= 0) {
        cout << "\nEnter Valid Room Number\n";
        goto up2;
    }
    return h;
}

void print(const hotel h) {
    cout << "|" << h.name << "\t\t\t|" << h.address << "\t\t\t\t|" << h.grade << "\t\t|" << h.charge << "\t\t|" << h.room << "\t\t|\n";
}

void printHeading() {
    cout << "---------------------------------------------------------------------------------------------------------\n";
    cout << "|Hotel Name\t\t|Hotel Address\t\t\t|Grade\t\t|Charge\t\t|Room\t\t|\n";
    cout << "---------------------------------------------------------------------------------------------------------\n";
}

void grade(hotel h[], int size) {
    char c;
    hotel temp;
    cout << "Enter Grade: ";
    cin >> c;

    bubbleSort(h, size);

    int cnt = 0;
    cout << "\nHotels with " << c << " Grade :\n";
    printHeading();
    for (int i = 0; i < size; i++) {
        if (c == h[i].grade) {
            print(h[i]);
            cnt = 1;
        }
    }
    cout << "---------------------------------------------------------------------------------------------------------\n";
    if (cnt == 0) {
        cout << "No hotels found with grade " << c << ".\n";
    }
}

void charge(hotel h[], int size) {
    int charge;
    cout << "\nEnter Maximum Charge: ";
    cin >> charge;

    bubbleSort(h, size);

    int cnt = 0;
    cout << "Hotels with charges less than or equal to " << charge << ":\n";
    for (int i = 0; i < size; i++) {
        if (charge >= h[i].charge) {
            printHeading();
            print(h[i]);
            cnt = 1;
        }
    }
    cout << "---------------------------------------------------------------------------------------------------------\n";
    if (cnt == 0) {
        cout << "No hotels found within the given charge range.\n";
    }
}

void bubbleSort(hotel h[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (h[j].charge > h[j + 1].charge) {
                hotel temp = h[j];
                h[j] = h[j + 1];
                h[j + 1] = temp;
            }
        }
    }
}

#include<iostream>
#include<string>

using namespace std;

struct player {
    string name;
    string team;
    float average;
};

struct player input();
void print(struct player);
void shor(struct player [], int);

int main() {
    int size = 3;
    struct player p[size];
    //input
    for(int i = 0; i < size; i++) {
        cout << "\nEnter " << i + 1 << " city data:\n";
        p[i] = input();
    }
    //output
    cout << "Enter Data :\n";
    cout << "----------------------------------------------------------\n";
    cout << "|Player Name\t\t|Team Name\t|batting average |\n";
    cout << "----------------------------------------------------------\n";
    for(int i = 0; i < size; i++) {
        print(p[i]);
    }
    cout << "----------------------------------------------------------\n";
    //short team wise
    cout << "\nTeam wise player name:\n";
    cout << "----------------------------------------------------------\n";
    cout << "|Player Name\t\t|Team Name\t|batting average |\n";
    cout << "----------------------------------------------------------\n";
    shor(p, size);
    for(int i = 0; i < size; i++) {
        print(p[i]);
    }
    cout << "----------------------------------------------------------\n";
    return 0;
}

struct player input() {
    struct player p;
    cout << "Enter player Name :";
    cin >> p.name;
    cout << "Enter Team Name :";
    cin >> p.team;
    up2:
    cout << "Enter Average :";
    cin >> p.average;
    if(p.average < 0) {
        cout << "Enter Valid average.\n";
        goto up2;
    }
    return p;
}

void print(struct player p) {
    cout << "|" << p.name << "\t\t\t|" << p.team << "\t\t|" << p.average << "\t\t |\n";
}

void shor(struct player p[], int size) {
    struct player temp;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(p[i].team[0] < p[j].team[0]) {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }
    return;
}

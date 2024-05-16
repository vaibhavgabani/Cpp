#include<iostream>
using namespace std;

int xstrlen(char *);
void xstrrev(char *);

int main() {
    char str[50];
    cout << "Enter String values: ";
    cin>>str;

    xstrrev(str);
    cout << "\nReversed string is: " << str;
    return 0;
}

int xstrlen(char *ptr) {
    int cnt = 0;
    while (*ptr != '\0') {
        cnt++;
        ptr++;
    }
    return cnt;
}

void xstrrev(char *ptr) {
    int l;
    char *start, *end;
    start = ptr;
    end = ptr;
    l = xstrlen(ptr);
    end += l - 1;
    for (int i = 0; i < l / 2; i++) {
        int temp = *end;
        *end = *start;
        *start = temp;
        start++;
        end--;
    }
    return;
}

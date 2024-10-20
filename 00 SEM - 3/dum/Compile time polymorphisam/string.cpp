#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
    char str[20];
    int size = 0;

    String() {
        str[0] = '\0'; // Initialize to empty string
    }

    // Overload input stream operator
    friend istream& operator>>(istream& in, String& a) {
        cout << "Enter Here: ";
        in >> a.str;
        a.size = strlen(a.str);
        return in;
    }

    // Overload output stream operator
    friend ostream& operator<<(ostream& out, const String& a) {
        out << a.str;
        return out;
    }

    // Other member functions remain the same

    String operator+(String a) {
        String tmp;
        strcpy(tmp.str, str); // Copy current string
        strcat(tmp.str, a.str); // Concatenate the other string
        tmp.size = strlen(tmp.str); // Update size
        return tmp;
    }

    int operator==(String a) {
        return strcmp(str, a.str) == 0; // Returns 1 if equal, 0 if not
    }

    int operator!=(String a) {
        return strcmp(str, a.str) != 0; // Returns 1 if not equal, 0 if equal
    }

    int operator<=(String a) {
        return size <= a.size; // Returns 1 if less than or equal
    }

    int operator<(String a) {
        return size < a.size; // Returns 1 if less
    }

    int operator>=(String a) {
        return size >= a.size; // Returns 1 if greater than or equal
    }

    int operator>(String a) {
        return size > a.size; // Returns 1 if greater
    }
};

int main() {
    String s1, s2, s3;

    cin >> s1; // Using overloaded >> operator
    cout << s1 << endl; // Using overloaded << operator

    cin >> s2; // Using overloaded >> operator
    cout << s2 << endl; // Using overloaded << operator

    cout << "s1 == s2: " << (s1 == s2) << endl;
    cout << "s1 != s2: " << (s1 != s2) << endl;
    cout << "s1 < s2: " << (s1 < s2) << endl;
    cout << "s1 <= s2: " << (s1 <= s2) << endl;
    cout << "s1 > s2: " << (s1 > s2) << endl;
    cout << "s1 >= s2: " << (s1 >= s2) << endl;

    return 0;
}

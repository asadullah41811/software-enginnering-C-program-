
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    // Convert uppercase to lowercase
    ch = tolower(ch);

    if ((ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a Vowel." << endl;
        } else {
            cout << ch << " is a Consonant." << endl;
        }
    } else {
        cout << "Invalid input! Please enter an alphabet." << endl;
    }

    return 0;
}


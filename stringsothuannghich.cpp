#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    bool isPalindrome = true;
    int len = n.length();
    for (int i = 0; i < len / 2; i++) {
        if (n[i] != n[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    bool hasSix = false;
    for (char c : n) {
        if (c == '6') {
            hasSix = true;
            break;
        }
    }

    if (isPalindrome && hasSix) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
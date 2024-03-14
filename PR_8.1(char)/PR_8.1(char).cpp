#include <iostream>
#include <cstring>

using namespace std;

int Count(const char* s) {
    int k = 0;
    size_t pos = 0;
    while (s[pos] != '\0') {
        if ((s[pos] == 'S' && s[pos + 1] == 'Q') || (s[pos] == 'Q' && s[pos + 1] == 'S'))
            k++;
        pos++;
    }
    return k;
}


char* Change(char* s) {
    size_t len = strlen(s);
    char* t = new char[len + Count(s) * 2 + 1];
    size_t pos1 = 0;
    size_t pos2 = 0;

    while (s[pos1] != '\0') {
        if ((s[pos1] == 'S' && s[pos1 + 1] == 'Q') || (s[pos1] == 'Q' && s[pos1 + 1] == 'S')) {
            t[pos2++] = '*';
            t[pos2++] = '*';
            t[pos2++] = '*';
            pos1 += 2;
        }
        else {
            t[pos2++] = s[pos1++];
        }
    }
    t[pos2] = '\0';

    return t;
}


int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contained " << Count(str) << " groups of 'SQ or QS'" << endl;
    char* newStr = Change(str);
    cout << "Modified string (param) : " << newStr << endl;
    delete[] newStr;
    return 0;
}

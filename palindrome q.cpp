#include <iostream>
using namespace std;
int main() {
    char st[100], st1[100], rev[100];
    int i, j = 0, len = 0;
    cout << "Enter The String" << endl;
    cin.getline(st, 100);
    while (st[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++) {
        if (st[i] != ' ') {
            st1[j] = st[i];
            j++;
        }
    }
    st1[j] = '\0';
    int len1 = j; 
    for (i = 0; i < len1; i++) {
        rev[len1 - i - 1] = st1[i];
    }
    rev[len1] = '\0'; 
    cout << rev << endl;  
    for (i = 0; i < len1; i++) {
        if (st1[i] >= 'A' && st1[i] <= 'Z') {
            st1[i] = st1[i] + 32;  
        }
        if (rev[i] >= 'A' && rev[i] <= 'Z') {
            rev[i] = rev[i] + 32; 
        }
    }
    for (i = 0; i < len1; i++) {
        if (st1[i] != rev[i]) {
            cout << "Not a palindrome" << endl;
            return 0; 
        }
    }
    cout << "Palindrome" << endl;
    return 0;
}
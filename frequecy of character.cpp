#include <iostream>
using namespace std;
int main() {
    char s[100];
    int i, j, count, len = 0;
    cout << "Enter a string: "<<endl;
    cin.getline(s, 100); 
    while (s[len] != '\0') {
        len++;
    }
    cout << "Frequecy of a character:\n"<<endl;
    for (i = 0; i < len; i++) {
        if (s[i] == '\0') 
        continue; 
        count = 1; 
        for (j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                count++;
                s[j] = '\0'; 
            }
        }
        cout << "'" << s[i] << "' = " << count << endl;
    }
    return 0;
}

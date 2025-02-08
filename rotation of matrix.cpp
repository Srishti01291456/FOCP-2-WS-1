#include <iostream>
using namespace std;
int main() {
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int res[3][3]; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res[j][2 - i] = mat[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

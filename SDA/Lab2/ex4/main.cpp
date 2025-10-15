#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int A[5][5] = {
      {1,2,3,4,5},
      {6,7,8,9,13},
      {11,12,13,14,15},
      {16,17,18,19,20},
      {21,22,23,24,25}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << A[i][j] << ", ";
        }
        cout << endl;
    }

    cout << "Valoarea cautata - ";
    int x;
    cin >> x;
    
    int i = 0, j = 4;
    bool found = false;

    while (i < 5 && j >= 0) {
        if (A[i][j] == x) {
            cout << "Valoarea a fost gasita la i0 = " << i << ", j0 = " << j << endl;
            found = true;
            break;
        } else if (A[i][j] > x) {
            j--;
        } else {
            i++;
        }
    }

    if (!found)
        cout << "Valoarea nu a fost gasita" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int r, c, c2, p;
    cin >> r >> c;
    cin >> c2 >> p;

    if (c != c2) {
        cout << "Invalid matrix dimensions";
        return 0;
    }

    double mat1[r][c], mat2[c][p];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat1[i][j];

    for (int i = 0; i < c; i++)
        for (int j = 0; j < p; j++)
            cin >> mat2[i][j];

    double result[r][p];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < p; j++)
            result[i][j] = 0;

    for (int i = 0; i < r; i++)
        for (int k = 0; k < c; k++)
            for (int j = 0; j < p; j++)
                result[i][j] += mat1[i][k] * mat2[k][j];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < p; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++)
            cout << mat1[i][j] << " ";
        cout << endl;
    }

    double s;
    cin >> s;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << mat1[i][j] * s << " ";
        cout << endl;
    }

    return 0;
}

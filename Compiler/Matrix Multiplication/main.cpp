#include <iostream>
using namespace std;

int main()
{/*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
    int a[3][3], b[3][3], mult[3][3], r1, c1, r2, c2, i, j, k;

    cin >> r1 >> c1;
    cin >> r2 >> c2;

    while (c1 != r2)
    {
        cout << "ReEnter:" << endl;
        cin >> r1 >> c1;
        cin >> r2 >> c2;
    }

    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            cin >> a[i][j];
        }

    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
        {
            cin >> b[i][j];
        }

    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
        }

    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    cout << "Output Matrix: " << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout<< " "  << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }

    return 0;
}

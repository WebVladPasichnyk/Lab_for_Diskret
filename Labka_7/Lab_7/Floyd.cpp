#include "Floyd.h"
#include <iomanip>

WinMain()

Floyd::Floyd() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j) p[i][j] = i + 1;
}

void Floyd::shortway() {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (d[i][j] > (d[i][k] + d[k][j]))
                {
                    d[i][j] = d[i][k] + d[k][j];
                    p[i][j] = k + 1;
                }
            }
        }
    }
}

void Floyd::way(int i, int j) {
    while (i != j) {
        A.push(j);
        j = p[i - 1][j - 1];
    }
    A.push(j);
    A.show();
}

void Floyd::show() {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            cout << " Вiдстань мiж вершинами " << i + 1 << " i " << j + 1 << " : " << setw(2) << d[i][j] << "; ";
            way(i + 1, j + 1);
        }
    }
}


void Floyd::out()
{
        const int Vv = 6;
        const int Xx = 6;


        int a[Vv][Vv] =
        {
            {0, 1, 5, 7, -1, 3},
            {8, 0, 4, 6, -2, 2},
            {15, 16, 0, 13, 5, 3},
            {2, 3, 7, 0, -5, -1},
            {10, 11, 15, 8, 0, 4},
            {INF, INF, INF, INF, INF, 0}
        }, t[Vv][Vv];

        int GR[Xx][Xx] =
        {
        {0, 1, 2, 5, 2, 5},
        {4, 0, 2, 5, 2, 5},
        {4, 1, 0, 5, 3, 3},
        {4, 1, 2, 0, 4, 5},
        {4, 1, 2, 5, 0, 5},
        {6, 6, 6, 6, 6, 0}

        }, y[Xx][Xx];
        cout << "-------- Lab_7 --------  ";
        cout << "\n Матриця шляху: p(6) ";
        for (int i = 0; i < Xx; i++)
        {
            cout << "\n ";
            for (int j = 0; j < Xx; j++)
            {
                cout << GR[i][j] << " ";
            }
        }
        cout << "\n-----------------------  " << endl;
        cout << " Матриця найкоротшого шляху мiж всiма парами вершин: d(6)";
        for (int i = 0; i < Vv; i++)
        {
            cout << "\n ";
            for (int j = 0; j < Vv; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << "\n-----------------------" << endl;
        cout << "             ~Вiдстань~ " << endl;
}

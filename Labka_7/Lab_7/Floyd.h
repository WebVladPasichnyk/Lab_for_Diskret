#pragma once
#define FLOYD_H
#include "List.h"
#define INF 88

class Floyd {
private:
    const int n = 6;
    int d[6][6] = {

        {0, 1, 6, INF, INF, INF},
        {INF, 0, 4, INF, -2, INF},
        {INF, INF, 0, INF, 5, 3},
        {2, INF, INF, 0, -5, INF},
        {INF, INF, INF, 8, 0, 4},
        {INF, INF, INF, INF, INF, 0}
    };
    int p[6][6]{ 0 };
    List A;
public:
    Floyd();
    void shortway();
    void way(int i, int j);
    void show();
    void out();
};

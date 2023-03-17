#include <iostream>
#include "Sort.h"
#include <cstdlib>


using namespace std;



int main()
{
    int n = 10, start = 3, ends = 7;
    int A[n] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    New_Arr(A, n);
    bubble_sort(A, n, start, ends);
    New_Arr(A, n);
    insertion_sort(A, n, start, ends);
    New_Arr(A, n);
    selection_sort(A, n, start, ends);
    return 0;
}

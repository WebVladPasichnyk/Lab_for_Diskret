#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

void bubble_sort(int *A, int n, int start, int ends);
void insertion_sort (int *A, int n, int start, int ends);
void selection_sort(int *A, int n, int start, int ends);

void show(int *A, int n);
void SWAP(int &a, int &b);
void New_Arr(int *A, int n);
#endif // SORT_H_INCLUDED

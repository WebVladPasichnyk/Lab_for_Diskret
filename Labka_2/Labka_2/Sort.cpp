#include <iostream>
#include <cstdlib>


using namespace std;

void show(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n\n";
}
void SWAP(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// базовий масив
void New_Arr(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
       A[i] = 9 - i;
    }
    cout << "Array: ";
    show(A, n);
}

void bubble_sort(int *A, int n, int st, int en)
{
      for (int i = st-1; i < en-1; i++)
        for (int j = st-1; j < en-1; j++)
            if (A[j]>A[j+1]) SWAP(A[j],A[j+1]);
    cout << "Bubble: ";
    show(A, n);
}

void insertion_sort (int *A, int n, int st, int en)
{
    for (int i = st-1; i <en; i++)
    {
        int key = A[i];
		int b = i;
		while ((b > st-1) && A[b - 1] > key)
        {
			A[b] = A[b - 1];
			b--;
		}
		A[b] = key;
    }
    cout << "Insertion: ";
    show(A, n);
}

int MinItem(int *A, int k, int n)
{
	int min_a = k;
	while (k < n)
    {
        if (A[min_a] >= A[k])
        {
            min_a = k;
        }
        k++;
	}
	return min_a;
}
void selection_sort(int *A, int n, int st, int en)
{
    for(int i = st-1; i < en; i++)
    {
        SWAP(A[MinItem(A, i, en)], A[i]);
    }
    cout << "Selection: ";
    show(A, n);
}

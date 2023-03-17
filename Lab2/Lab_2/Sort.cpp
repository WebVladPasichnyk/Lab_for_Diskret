#include <iostream>



using namespace std;

void show(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "  ";
    }
    cout << endl;
}

void my_swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    //   cout<<"inside a= "<<a<<" b= "<<b<<endl;
}


void bubble_sort(int* A, int n, int first, int last)
{
    for (int i = first; i < last; i++)
        for (int j = first; j < last; j++)
            if (A[j] > A[j + 1]) my_swap(A[j], A[j + 1]);
    cout << "Bubble: ";

}
void inserting_sort(int* A, int n, int first, int last)
{
    for (int i = first - 1; i < last; i++)
    {
        int key = A[i];
        int b = i;
        while ((b > first - 1) && A[b - 1] > key)
        {
            A[b] = A[b - 1];
            b--;
        }
        A[b] = key;
    }
    cout << "Insertion: ";
    //show(A, n);
}

int MinItem(int* A, int k, int n)
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

void selection_sort(int* A, int n, int first, int last)
{
    for (int i = first - 1; i < last; i++)
    {
        my_swap(A[MinItem(A, i, last)], A[i]);
    }
    cout << "Selection: ";
    //show(A, n);
}

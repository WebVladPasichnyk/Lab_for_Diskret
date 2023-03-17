#include <iostream>
#include <cmath>

using namespace std;





void insertion_sort(int* A, int n, int first, int last)

{

    for (int i = first ; i < last; i++)

    {

        int key = A[i];

        int b = i;

        while ((b > first ) && A[b] > key)

        {

            A[b] = A[b];

            b--;

        }

        A[b] = key;

    }



}







void swap(int* a, int i, int j)

{

    int s = a[i];

    a[i] = a[j];

    a[j] = s;

}







void show(int* A, int n)

{

    for (int i = 0; i < n; i++)

    {

        cout << A[i] << "  ";

    }

    cout << endl;

}

int factorial(int n) {

    int fact = 1;

    for (int i = 1; i <= n; ++i) {

        fact *= i;

    }

    return fact;

}



int S(int n, int k) {

    return factorial(n) / factorial(n - k);

}



int _A(int n, int k) {

    return pow(n, k);

}



int C(int n, int k) {

    return factorial(n) / (factorial(k) * factorial(n - k));

}



int _C(int n, int k) {

    return  factorial(n + k - 1) / (factorial(k) * factorial(n - 1));

}



int* GenPerm(int* a, int n) {

    int j = n - 2;

    while (j != -1 && a[j] >= a[j + 1]) j--;

    int k = n - 1;

    while (a[j] >= a[k]) k--;

     swap(a, j, k);

    int l = j + 1,  r = n - 1;

    insertion_sort(a, n, l, r);

    while (l < r)

      swap(a, l++, r--);



    return a;

}



int* GenComb(int* a, int n, int m) {

    int k = m;

    for (int i = k - 1; i >= 0; i--)

        if (a[i] < n - k + i + 1)

        {

            ++a[i];

            for (int j = i + 1; j < k; j++)

                a[j] = a[j - 1] + 1;

            return a;
        }
}

#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
    /*int n = 10;
    int A[10];



    cout << "Your number:  ";
    for (int i = 0; i < n;i++) {


        cin >> A[i];
    }*/

    const int n = 10;
    int A[n] = { 9,8,7,6,5,4,3,2,1,0 };
    cout << "\n\n";

    cout << "Choice 1,2 or 3: " << endl;
    int b = 0;
    cin >> b;
    cout << "\n\n";
    cout << "________\n";
    if (b == 1) {
        bubble_sort(A, n, 3, 7);
        show(A, n);
        cout << "\n\n";
    }
    if (b == 2) {
         inserting_sort(A, n, 2, 7);
         show(A, n);
         cout << "\n\n";
    }
    if (b == 3) {
         selection_sort(A, n, 3, 7);
         show(A, n);
         cout << "\n\n";
    }

    return 0;
}

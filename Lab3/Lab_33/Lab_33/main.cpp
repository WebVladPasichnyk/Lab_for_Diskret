#include <iostream>
#include "Comb.h"
#include<Windows.h>
#include <math.h>


using namespace std;




int main()

{
    setlocale(LC_ALL, "ukr");

int n, k, result, f1, f2;



cout << "\n\t ����� �������� n: ";

cin >> n;

cout << "\t ����� �������� k: ";

cin >> k;

f1 = factorial(n);

f2 = factorial(k);

    cout << "\n �������� �� n = " << f1;

cout << "\n �������� �� k = " << f2 << endl<<endl;

    cout << "ʳ������ �������� ��� ���������: (n!/(n-k)!)" ;

    result = factorial(n) / factorial(n - k);

cout << "\n ���������: " << result << endl << endl;



    cout << "ʳ������ ��������� ��� ��������� (n!/k!(n-k)!";

    result = factorial(n) / factorial(k) / factorial(n - k);

cout << "\n ���������: " << result << endl << endl;

 cout << "ʳ������ �������� � ������������(n � ������ k)";

    result = pow(n, k);

    cout << "\n ���������: " << result << endl << endl;

    cout << "ʳ������ ��������� � ������������ (n+k-1)!/k!(n-1)!" ;

    result = factorial(n + k - 1) / factorial(k) / factorial(n - 1);

cout << "\n ���������: " << result << endl << endl;





int A[6] = { 1,2,3,4,5,6 };

int K[6] = { 1,2,3,4,5,6 };

cout << "����������� ������������ � ����������������� �������:" << endl;

show(A, n);

for (int i = 1; i < factorial(n);i++) {



cout << i + 1 << ". ";

show(GenPerm(A, n), n);

}

cout << "����������� ��������� � ��������������� �������:" << endl;

cout << 1 << ". ";



show(K, 4);

for (int i = 1; i < factorial(n) / (factorial(k) * factorial(n - k));i++) {



cout << i + 1 << ". ";

show(GenComb(K, n, 4), 4);

}



return 0;

}

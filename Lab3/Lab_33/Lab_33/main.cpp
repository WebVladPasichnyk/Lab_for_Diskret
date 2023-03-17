#include <iostream>
#include "Comb.h"
#include<Windows.h>
#include <math.h>


using namespace std;




int main()

{
    setlocale(LC_ALL, "ukr");

int n, k, result, f1, f2;



cout << "\n\t Ведіть значення n: ";

cin >> n;

cout << "\t Ведіть значення k: ";

cin >> k;

f1 = factorial(n);

f2 = factorial(k);

    cout << "\n Факторіал від n = " << f1;

cout << "\n Факторіал від k = " << f2 << endl<<endl;

    cout << "Кількість розміщень без повторень: (n!/(n-k)!)" ;

    result = factorial(n) / factorial(n - k);

cout << "\n Рузультат: " << result << endl << endl;



    cout << "Кількість сполучень без повторень (n!/k!(n-k)!";

    result = factorial(n) / factorial(k) / factorial(n - k);

cout << "\n Резельтат: " << result << endl << endl;

 cout << "Кількість розміщень з повтореннями(n в степені k)";

    result = pow(n, k);

    cout << "\n Резельтат: " << result << endl << endl;

    cout << "Кількість сполучень з повтореннями (n+k-1)!/k!(n-1)!" ;

    result = factorial(n + k - 1) / factorial(k) / factorial(n - 1);

cout << "\n Результат: " << result << endl << endl;





int A[6] = { 1,2,3,4,5,6 };

int K[6] = { 1,2,3,4,5,6 };

cout << "Генерування перестановок у лексикографічному порядку:" << endl;

show(A, n);

for (int i = 1; i < factorial(n);i++) {



cout << i + 1 << ". ";

show(GenPerm(A, n), n);

}

cout << "Генерування сполучень в лексиграфічному порядку:" << endl;

cout << 1 << ". ";



show(K, 4);

for (int i = 1; i < factorial(n) / (factorial(k) * factorial(n - k));i++) {



cout << i + 1 << ". ";

show(GenComb(K, n, 4), 4);

}



return 0;

}

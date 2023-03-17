#include <iostream>
#include "LogCon.h"

using namespace std;

int main()
{
     bool a, b;

    cout << "| a | b | NOT(a) | AND(a,b) | OR(a,b) | IMP(a,b) | EQU(a,b) | XOR(a,b) |" << endl;

    a = true;

    b = true;

    cout << "| " << a << " | " << b <<

        " |    " << NOT(a) << "   |" <<

        "     " << AND(a, b) << "    |" <<

        "    " << OR(a, b) << "    |" <<

        "     " << IMP(a, b) << "    |" <<

        "     " << EQU(a, b) << "    |" <<

        "     " << XOR(a, b) << "    |" << endl;



    a = true;

    b = false;

    cout << "| " << a << " | " << b <<

        " |    " << NOT(a) << "   |" <<

        "     " << AND(a, b) << "    |" <<

        "    " << OR(a, b) << "    |" <<

        "     " << IMP(a, b) << "    |" <<

        "     " << EQU(a, b) << "    |" <<

        "     " << XOR(a, b) << "    |" << endl;



    a = false;

    b = true;

    cout << "| " << a << " | " << b <<

        " |    " << NOT(a) << "   |" <<

        "     " << AND(a, b) << "    |" <<

        "    " << OR(a, b) << "    |" <<

        "     " << IMP(a, b) << "    |" <<

        "     " << EQU(a, b) << "    |" <<

        "     " << XOR(a, b) << "    |" << endl;



    a = false;

    b = false;

    cout << "| " << a << " | " << b <<

        " |    " << NOT(a) << "   |" <<

        "     " << AND(a, b) << "    |" <<

        "    " << OR(a, b) << "    |" <<

        "     " << IMP(a, b) << "    |" <<

        "     " << EQU(a, b) << "    |" <<

        "     " << XOR(a, b) << "    |" << endl;



    cout << "________________________________________________________________________" << endl;

    cout << endl;



    bool c;



    cout << "| a | b | c | F15 |" << endl;



    a = true;

    b = true;

    c = true;

    cout << "| " << a << " | " << b << " | " << c << " |  " << F15(a, b, c) << "  |" << endl;



    a = true;

    b = true;

    c = false;

    cout << "| " << a << " | " << b << " | " << c << " |  " << F15(a, b, c) << "  |" << endl;



    a = true;

    b = false;

    c = true;

    cout << "| " << a << " | " << b << " | " << c << " |  " << F15(a, b, c) << "  |" << endl;



    a = false;

    b = true;

    c = true;

    cout << "| " << a << " | " << b << " | " << c << " |  " << F15(a, b, c) << "  |" << endl;



    a = true;

    b = false;

    c = false;

    cout << "| " << a << " | " << b << " | " << c << " |  " << F15(a, b, c) << "  |" << endl;



    a = false;

    b = true;

    c = false;

    cout << "| " << a << " | " << b << " | " << c << " |  " << F15(a, b, c) << "  |" << endl;



    a = false;

    b = false;

    c = true;

    cout << "| " << a << " | " << b << " | " << c << " |  " << F15(a, b, c) << "  |" << endl;



    a = false;

    b = false;

    c = false;

    cout << "| " << a << " | " << b << " | " << c << " |  " << F15(a, b, c) << "  |" << endl;



    return 0;

}

bool NOT(bool a)

{

    if (a == true) return false;

    else return true;

}



bool AND(bool a, bool b)

{

    if (a == true && b == true) return true;

    else return false;

}



bool OR(bool a, bool b)

{

    if (a == false && b == false) return false;

    else return true;

}



bool IMP(bool a, bool b)

{

    if (a == true && b == false) return false;

    else return true;

}



bool EQU(bool a, bool b)

{

    if (a == b) return true;

    else return false;

}



bool XOR(bool a, bool b)

{

    if (EQU(a, b)) return false;

    else return true;

}



bool F15(bool a, bool b, bool c)

{

   bool x1, x2, x3, x4, x5, x6, x7, x8;
   x1 = NOT(a);
   x2 = NOT(b);
   x3 = IMP(a, b);
   x4 = OR(c, a);
   x5 = NOT(x4);
   x6 = AND(x3, x5);
   x7 = OR(x1, x2);
   x8 = IMP(x6, x7);

   return x8;



}


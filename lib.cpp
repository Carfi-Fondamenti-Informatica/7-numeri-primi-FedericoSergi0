#include "lib.h"
bool numeriprimi ( int a)
int b=2;
    for (int b=2; b<a; b++);
int risultato=0;
    {
        risultato=(a%b);
        if(risultato==0)
      {
            return false;
    }
        else{
            return true;
        }

    }



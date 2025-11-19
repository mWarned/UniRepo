#include "recurs.h"

int cmmdc(int m, int n){ if(!n) return m; return cmmdc(n,m%n); }

float S(float x, int n)
{
  static float T=1;
  if (n==0)
  {
    T=1;
    return 1;
  }
  return S(x,n-1)+(T*=x/n);
}

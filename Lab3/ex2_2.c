#include <stdio.h>

int main(void)
{
  int hc,mc,sc, hd, md, sd, hh, mm, ss;

  printf("Introduceti ora conectarii (hh:mm:ss, numere intregi):\n"); scanf("%d%d%d", &hc, &mc, &sc);
  if (hc > 24 || hc < 0 || mc > 60 || mc < 0 || sc > 60 || sc < 0)
  {
    printf("Ati introdus ora incorect!");
    return 1;
  }

  printf("\nIntroduceti ora deconectarii (hh:mm:ss, numere intregi):\n"); scanf("%d%d%d", &hd, &md, &sd);
  if (hc > 24 || hc < 0 || mc > 60 || mc < 0 || sc > 60 || sc < 0)
  {
    printf("Ati introdus ora incorect!");
    return 1;
  }

  if(sd < sc){
    md -= 1;
    sd += 60;
  }

  if(md < mc)
  {
    hd -= 1;
    md += 60;
  }

  if(hd < hc)
  {
    hd += 24;
  }

  hh = hd - hc;
  mm = md - mc;
  ss = sd - sc;

  printf("Durata conexiunii - %d:%d:%d\n", hh, mm, ss);

  return 0;
}

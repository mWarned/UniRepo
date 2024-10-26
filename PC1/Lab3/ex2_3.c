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

  printf("\nIntroduceti durata conexiunii (hh:mm:ss, numere intregi):\n"); scanf("%d%d%d", &hh, &mm, &ss);
  if (hh > 24 || hh < 0 || mm > 60 || mm < 0 || ss > 60 || ss < 0)
  {
    printf("Ati introdus durata incorect!");
    return 1;
  }

  hd = hh + hc;
  md = mm + mc;
  sd = ss + sc;

  if(sd > 60){
    md += 1;
    sd -= 60;
  }

  if(md > 60)
  {
    hd += 1;
    md -= 60;
  }

  if(hd > 24)
  {
    hd -= 24;
  }

  printf("Ora deconectarii - %d:%d:%d\n", hd, md, sd);

  return 0;
}

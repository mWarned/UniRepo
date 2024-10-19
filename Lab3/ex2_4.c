#include <stdio.h>

int main(void)
{
  int appcheck;

  printf("Punctul a (1) sau b(2) - "); scanf("%d", &appcheck);
  if(appcheck == 1)
  {
    int temptable[2][31];

    for(int i = 0; i < 31; i++)
    {
      temptable[0][i] = i * 10;
      temptable[1][i] = (int)((5.0 / 9.0) * (temptable[0][i] - 32)); 
    }

    for(int i = 0; i < 2; i++)
    {
      printf("{");
      for(int j = 0; j < 31; j++)
      {
        printf("%d  ", temptable[i][j]);
      }
      printf("}\n");
    }
  } else if (appcheck == 2)
  {
    int pas;
    printf("Dati pasul - "); scanf("%d", &pas);
    int n = (int)((400 / pas) + 1);
    int temptable[2][n];

    int celsius = 0;
    for(int i = 0; i < n; i++)
    {
      temptable[0][i] = celsius;
      celsius += pas;
      temptable[1][i] = (int)(((9.0 / 5.0) * temptable[0][i]) + 32); 
    }

    for(int i = 0; i < 2; i++)
    {
      printf("{");
      for(int j = 0; j < n; j++)
      {
        printf("%d  ", temptable[i][j]);
      }
      printf("}\n");
    }
  }

  return 0;
}

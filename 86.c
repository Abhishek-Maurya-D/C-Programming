// To print the series as
// 1
// 2 3
// 4 5 6
// 7 8 9 10



#include <stdio.h>
int main()
{
  int i,j, c=1, n;
  printf ("enter number of terms\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf(" %d",c);
      c++;
    }
    printf("\n");
  }
}
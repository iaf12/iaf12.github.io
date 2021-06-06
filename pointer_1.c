#include <stdio.h>
#define M 5

void maxMin(size_t n, const int v[n], int *max, int *min)
{
  *max = v[0];
  *min = v[0];

  for(size_t i = 1; i < n; i++)
  {
    if(*max < v[i])
    {
      *max = v[i];
    }
    if(*min > v[i]){
      *min = v[i];
    }
  }
}

int main (void)
{
  int v[M] = {1, 3, 5, 7, 8};
  int max;
  int min;

  maxMin(M, v, &max, &min);

  printf("MAX %d\n", max);
  printf("MIN %d\n", min);
  return 0;
}

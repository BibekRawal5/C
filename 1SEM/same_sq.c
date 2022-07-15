#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool comp(const int *a, int *b, size_t n)
{
  int count = 0;
  for(int i = 0; i < n; i++){
    for(int j =0; j < n; j++){
      if(b[j] == (a[i] * a[i]))
       { 
            count++;
            b[j] = NULL;
       }
    }
  }
  printf("%d\n",count);
  if(count == n)
    return true;
  else
    return false;
}

int main()
{
    int a[8] = {121, 144, 19, 161, 19, 144, 19, 11};
        int b[8] = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
    int c = comp(a, b, 8);
    printf("%d\n\n", c);
}
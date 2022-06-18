#include <stdio.h>
#include <stdlib.h>

int main(){
int *a = malloc(sizeof(int)*2);

  printf("%d", a[5]);
  free(a);
 return 0;
}
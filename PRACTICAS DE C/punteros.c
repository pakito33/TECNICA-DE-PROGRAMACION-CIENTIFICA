/*CTPC 2020 - UNQ*/
#include <stdio.h>

int main (void)
{
  int *p1;
  int x=5;

  *p1=4;

  printf (" La direccion almacenda en p1 es %p\n", p1);
  printf (" Lo apuntado por p1 es: %d\n", *p1);

  p1 = &x;

  printf (" La nueva direccion almacenada en p1 es: %p\n", p1);
  printf (" La direccion de x es: %p\n", &x);
  printf (" Lo apuntado por p1 es: %d\n", *p1);

  x=3;

  printf (" Lo apuntado por p1 es: %d\n", *p1);
  return 0;
}


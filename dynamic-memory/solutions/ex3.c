#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  void *mem = calloc(1000, 100000000);

  printf ("mem: %p\n");

  if (mem!=NULL)
    {
      free(mem);
    }
  return 0;
}

#include <stdio.h>
#include "time-date.h"

int main()
{
  int i;
  for (i=1; i<=24; i++)
    {
      print_month_name(i);
    }
  return(0);
}

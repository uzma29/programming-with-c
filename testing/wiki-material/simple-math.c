#include <stdio.h>
#include <limits.h>
#include <math.h>
#include "simple-math.h"

int
max(int a, int b)
{
  if (a>b)
    {
      return a;
    }
  return b;
}

int
min(int a, int b)
{
  if (a<b)
    {
      return a;
    }
  return b;
}


int
mean(int *array, int size, int *result)
{
  int i ;
  // Store the sum in a long long instead
  long long sum;
  
  if ( (array==NULL) || (result==NULL) )
    {
      return 1;
    }

  if (size<0)
    {
      return 2;
    }
  
  // initialise sum to 0
  sum = 0 ;
  for (i=0; i<size; i++)
    {
      // add the value to sum
      sum = sum + array[i];

      // Check if the sum fits in an int
      if ((sum>INT_MAX) || (sum<INT_MIN) )
        {
          return 3;
        }
    }

  DEBUG("%lld / %d => %lld\n", sum, size, sum/size);
  /* A trick seen every here and there is:
   *  *result = (int)(sum+(size-1))/size;
   * But if we use this we need to check if (sum+(size-1)) is > INT_MAX */
  /*
   *
   *     *result = (int)round(((double)sum/(double)size));

   */
  
  *result = (int)round(((double)sum/(double)size));
  return 0;
}


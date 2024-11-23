#include <stdio.h>
#include<time.h>                  //  for time()
#include<stdlib.h>                // for rand()

int main()
{
    srand(time(NULL));                       // seeding the random number generator
   int array[100], n, c, d, position, swap;
n=100;

   for ( c = 0 ; c < n ; c++ )
      array[c]=rand()%1001+1;                 // storing a random number between 0 and 100 ( Note that this might produce the same number more than once )

   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;

      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }

   printf("Ordenamiento por seleccion acendente:\n");

   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);

   return 0;
}

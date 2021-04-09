#include <stdio.h>

/* array-pt-2.c */
int main( void) {
  int a[5]= {1, 2, 3, 4, 5};
  int *pta, i;

   pta = a; /* or, pta= &a[0]; */
  *pta = 4;
  /**<a[0] = 4*/
   pta++;
   /**< pta = 5 */
  *pta = *(pta - 1) * 2;
  /**< a[1] 8 = (5 - 1) * 2*/
   pta += 3;
   /**< a[2] = 3 */
  (*pta)++;
  /**< a[3] = 4 */
  printf("index: %d\n", pta - a);

  for(i = 0; i < 5; i++) {
    printf("a[%d]: %d\n",i,a[i]);
  }
  return 0;
}

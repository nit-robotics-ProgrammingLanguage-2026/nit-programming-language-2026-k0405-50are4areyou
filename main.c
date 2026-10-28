#include <stdio.h>

int main(void) {
   double r = 4.0;
   double pi = 3.141592;
   double x;
   double a;

   if (scanf("%lf", &x) !=1) {
    return 1;
   }
   a = (x * 360.0) / (pi * r);
   printf("%f\n", a);

   return 0;
}

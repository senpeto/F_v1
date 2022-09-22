#include <math.h>
#include <stdio.h>

int main() {
float x, fx, gx;
printf ("Your x: ");
scanf ("%f", &x);
fx = exp(-(abs(x)))*sin(x);
gx = exp(-(abs(x)))*cos(x);
printf ("F(x) = %f \nG(x) = %f", fx, gx);
return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define SEED 35791246

main(int argc, char* argv)
{
   int n=0;
   double x,y;
   int i,c=0; /* no. of points in the 1st quadrant of unit circle */
   double z;
   double pi;

   printf("Enter the number of iterations used to estimate pi: ");
   scanf("%d",&n);

   srand(SEED);
   c=0;
   for ( i=0; i<n; i++) {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      z = x*x+y*y;
      if (z<=1) c++;
      }
   pi=(double)c/n*4;
   printf("# of trials= %d , estimate of pi is %g \n",n,pi);
}


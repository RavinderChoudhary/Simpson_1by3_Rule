#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 1/(1+x*x)             //  I1

int main()
{
 float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;

 
 lower = 0;
 upper = 6;                          //  3 I2
 stepSize = 1;                // h

 subInterval = (upper - lower)/stepSize;
 stepSize = (upper - lower)/subInterval;

 integration = f(lower) + f(upper);
 int count = 0;
 printf("y%d = %f\n",count,f(lower));
 count++;
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  if(i%2==0)
  {
   integration = integration + 2 * f(k);
  }
  else
  {
   integration = integration + 4 * f(k);
  }
  printf("y%d = %f\n",count,f(k));
  count++;
 }
 integration = integration * stepSize/3;
 printf("y%d = %f\n",count,f(upper));
 printf("\nRequired value of integration is: %.3f", integration);
 return 0;
}
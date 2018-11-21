#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define max(x) _Generic((x), double: dmax, \
                default: imax, \
                long: lmax)(x)

double dmax(double d)
{
  puts("dmax");
  return d + 1;
}
long lmax(long l)
{
  puts("lmax");
  return l + 1;
}
int imax(int i)
{
  puts("imax");
  return i + 1;
}
int main(void)
{

  double d = 12.2;
  long l = 9;
  int i = 123;
  printf("%lf\n",max(d));
  printf("%ld\n",max(l));
  printf("%d\n",max(i));

  return 0;
}

#include <stdio.h>

int main()
{
int celsius,fahr;
int step,upper,lower;

lower=0;
upper=200;
step=20;

celsius=lower;
while(celsius<=upper)
{
fahr=(9/5)*(celsius+32);
printf("%d\t%d\n",celsius,fahr);
celsius=celsius+step;
}
}

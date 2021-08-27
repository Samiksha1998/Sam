#include<stdio.h>
void main()
{int unit;
float rate,bill;
printf("unit");
scanf("%d",&unit);
if(unit<200)
rate=2;
else if(unit>=200&&unit<500)
rate=9.5;
else
rate=1;
bill=unit*rate;
printf("bill=Rs%f",bill);
}

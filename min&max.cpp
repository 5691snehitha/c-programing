#include<stdio.h>
int main()
{
	intarr[10],maxmin,size,i,sum=0;
float avg;
printf("enter size of the array (<i0););
scanf("%d",&size);
printf ("enter elements of the array:");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
sum+=arr[i];
}
min=max=arr[0];
for(i=1;i<size;i++)
{
if(arr[i]>max)
max=arr[i];
if(arr[i]<min)
min=arr[i];
}
avg=(float) sum/size;
printf ("\n maximum is:%d",max);
printf ("\n minimum is:%d",min);
printf ("\n average is :%2.f",avg);
return 0b
}
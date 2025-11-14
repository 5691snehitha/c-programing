#include<stdio.h>
int main(void)
{
	int arr[6], i, sum=0;
	float avg;
	printf("enter value for arr[6]:/n");
	for(i=0;i<6;i++)
	scanf("%d", &arr[i]);
	for (i=0;i<6;i++)
	sum=sum+arr[i];
	avg=(float)sum/6;
	printf("\nsum of the elements in an[6] is : %d",sum);
	printf("\naverage of elements in an [6] is:%lf",avg);
}
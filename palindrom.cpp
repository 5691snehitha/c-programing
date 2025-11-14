#include<stdio.h>
#include<math.h>
int main (void)
{
	int num, rem, rev= 0, temp;
	printf("enter any number :");
	scanf("%d",&num);
	temp=num;
	
	while(num>0)
	{
		rem = num%10;
		rev = (rev*10)+rem;
		num = num/10;
		
	}
	if (rev == num)
	printf("%d is a palindrome",temp);
	else
	printf("%d is not a palindrome",temp);
}
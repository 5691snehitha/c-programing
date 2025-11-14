//basic calculator using switvh-case
#include <stdio.h>
int main (void)
{
	int a, b, add, sub ,mul, mod;
	float div;
	char op;
	printf("enter the operator :");
	scanf("%c",&op);
	printf("enter any two values :"  );
	scanf("%d %d",&a ,&b);
	switch(op)
	{
		case '+' : add=a+b;
		printf("addition : %d " ,add);
		break;
		
		case '-' : sub=a-b;
		printf("subtraction : %d ", sub);
		break;
		
		case '*' : mul=a*b;
		printf("multiplication : %d ", mul);
		break; 
		
		
		case '/' : div=(float)a/b;
		printf("division : %f",div);
		break;
		
		case '%' : mod=a%b;
		printf("remainder : %d",mod);
		break;
		
		deafault : printf("sorry! invalid choice ..... ;");
	}
}
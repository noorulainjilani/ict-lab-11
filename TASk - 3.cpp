#include <stdio.h>
#include <conio.h>

int swap(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
main()
{
	int n1=2, n2=3;
	swap(&n1,&n2);
	printf("%d , %d",n1,n2);
	
}

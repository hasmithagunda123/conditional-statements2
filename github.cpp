#include<stdio.h>
int main()
{
	int number;
	scanf("%d",&number);
	printf("enter marks");
	if(85<=number>=100)
	printf("grade A");
	else if(70<=number>=84)
	printf("grade B");
	else if(55<=number>=69)
	printf("grade C");
	else if(40<=number>=54)
	printf("grade D");
	else if(number<40)
	printf("fail");
	else
	printf("invalid");

	
}

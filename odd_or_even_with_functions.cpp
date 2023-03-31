//is the number is odd or even?
//odd > tek
//even > çift

#include<stdio.h>
#include<stdlib.h>

int oddoreven(int x)
{
	if(x%2==0)
	return 0;
	
	else
	return 1;
}

int main () {
	
	int num;
	int final;
	
	printf("Please write a positive number: ");
	scanf("%d",&num);
	
	final = oddoreven(num);
	
	if(final==0)
		printf("The number %d is even",num);
	else
		printf("The number %d is odd",num);
	
	return 0;
}

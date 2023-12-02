#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
	if (n==0)
	    return 0;
	if (n==1||n==2)
	    return 1;
else
   return (fib(n-1)+fib(n-2));
   }
   int main()
   {
   	int n=0;
   	printf("fibonacci series""of %d number is :",n);
   	for (int i=0; i<n;i++){
printf("%d",fib(i));
	   }
	   return 0;
   	
   }


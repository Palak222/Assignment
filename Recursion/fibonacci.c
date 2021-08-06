#include<stdio.h>    

int fibonacci(int n){

	if(n == 1 || n == 0)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
         
}    
int main()
{
	int n = 3;
	int a = 3;  // fibonacci series in this program starts from 0, 1, 1, 2 ....,n. That's why starting index is intialized to 3 which is as per the required output.

	for(int i = 0;i < n; i++)
	{
	printf("%d ", fibonacci(a));
	a = a + 3;
	}

	return 0;  
 }    

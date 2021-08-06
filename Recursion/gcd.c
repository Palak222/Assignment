#include<stdio.h>

int gcd(int n1, int n2){
	
	if(n2 == 0)
	{
		return n1;
	}
	else
	{
		return gcd(n2, n1%n2);
	}

}

int main(){

	int result = gcd(10, 15);
	printf("GCD is : %d ",result);
	return 0;

}


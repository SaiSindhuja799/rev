
#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	while(n)
	{
		printf("%d",n%10);
		n=n/10;
	}
}

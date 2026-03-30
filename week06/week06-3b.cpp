// week06-3b.cpp SOIT107_Base_001
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int d50 = n / 50;
	int d10 = (n%50) / 10;
	int d5 = (n%10) / 5;
	int d1 = (n%5) / 1;
	printf("%d=50*%d+10*%d+5*%d+1*%d", n,d50,d10,d5,d1);	
	
}
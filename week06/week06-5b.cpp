// week06-5b.cpp SOIT107_Base_008
#include <stdio.h>
int main()
{
	printf("Enter the number of values to be processed: ");
	int n;
	scanf("%d", &n);
	int ans=1, now;
	for(int i=0; i<n; i++){
		printf("Enter a value: ");
		scanf("%d", &now);
		ans = ans * now;
	}
	printf("Product of the %d values is %d",n, ans);
}
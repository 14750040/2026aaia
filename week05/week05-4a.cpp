// week05-4a.cpp SOIT106_BASE_004
#include <stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	int ans=100;
	if (k>2000){
		ans += (k-2000)/500 * 5;
		if ((k-2000)%500>0) ans+=5;
	}
	printf("%d\n", ans);
	
}
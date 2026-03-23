// week05-4b.cpp SOIT107_Base_002
#include <stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	int ans=100;
	if (k>2000){
		ans += (k-1500)/250 * 5;
		if ((k-1500)%250>0) ans+=5;
	}
	printf("%d", ans);
	
}
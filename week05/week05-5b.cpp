#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for (int i=0; i<n; i++){
		int now;
		scanf("%d", &now);
		ans+=now;
	}
	printf("%d\n",ans);
}
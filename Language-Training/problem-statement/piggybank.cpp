#include<iostream>
#include<algorithm>
#include<string.h> 
using namespace std;
int a[6000],b[6000],dp[1000005];
int main()
{
	int i,j,k,m,n;
	int T,t;
	int inf=99999999;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&m);
		k=m-n;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d%d",&a[i],&b[i]);
		for(i=0;i<=k;i++)
			dp[i]=inf;
		dp[0]=0;
		for(i=0;i<n;i++)
       		 for(j=b[i];j<=k;j++)
                dp[j]=min(dp[j],dp[j-b[i]]+a[i]);
        if(dp[k]==inf)
        	printf("This is impossible.\n");
        else
    		printf("The minimum amount of money in the piggy-bank is %d.\n",dp[k]);
	}
	return 0;
} 




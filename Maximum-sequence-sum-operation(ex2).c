#include <stdio.h>

int main()
{
	int i, j;
	int n;
	int low[5], up[5];
	int sum = 0, max = 0;
	int a, b;
	int k;
	
	printf("enter a number: \n");
	if(scanf("%d", &n)){};
	
	for(j=0; j<n; j++){
		printf("enter two number:");
		if(scanf("%d %d", &low[j], &up[j])){};
	}
	
	for(k=0; k<n; k++)
	{
		for(i=low[k]; i<=up[k]; i++)
		{
			a = i;
			while(a!=1)
			{
				sum += a;
				if(a%2==1)
				{
					a = 3*a + 1;
				}
				else
				{
					a = a / 2;
				}
			}	
			
			if(sum>=max){
				max = sum + 1;
				b = i;
			}
			sum = 0;
		}
		printf("%d %d\n", max, b);
		max = 0;
		b = 0;
	}
}

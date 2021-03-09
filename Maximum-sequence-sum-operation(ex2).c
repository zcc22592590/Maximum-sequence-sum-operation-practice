#include<stdio.h>
int main()
{
 	int n,i,j,k,sum=0,max=0,a,b; 
 	scanf("%d",&n);
 	int LowerBound[n],UpperBound[n];
 	for(j=0;j<n;j++)
 	{
  		scanf("%d %d",&LowerBound[j],&UpperBound[j]); 
 	}
 	for(k=0;k<n;k++)
 	{ 
 		for(i=LowerBound[k];i<=UpperBound[k];i++)
 		{
  			a=i;
  			while(a!=1)
  			{
   				sum+=a;
   				if(a%2==1)
   				{
    				a=3*a+1;    
   				}
   				else
   				{
    				a=a/2;
   				}   
  			}		
  			if(sum>=max)
			{
   				max=sum+1;
   				b=i;
  			}	  
  			sum=0;  
 		}
 		printf("%d %d\n",max,b);
 		max=0;
 		b=0;
 
 	}
 	return(0);
}

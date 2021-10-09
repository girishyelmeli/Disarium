#include<stdio.h>
#include<math.h>
int length(int g)
{
	int p,count=0;
	while(g!=0)
	{
		p=g%10;
		count++;
		g=g/10;
	}
	return count;
}
int dis(int n)
{
	int c,d=0,i,sum;
	i=length(n);
	while(i>0)
	{
		
		c=n%10;
			d=d+pow(c,i);
			;
			
			n=n/10;
		i--;
	}
		printf("\n d: %d",d);
		return d;
}
int main()
{
	int a,m;
	scanf("%d",&a);
	m=dis(a);

	if(a==m)
		printf("\n this is Disarium No:");
	else
		printf("\n it is not Disarium No.");
	return 0;
}

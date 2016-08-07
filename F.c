//new
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	int m = a ,n = b;
	int i = 0;
	do
	{
		//printf("a = %d b = %d\n",a,b);
		int tmp;
		if (a%b != 0)
		{
			tmp = b;
			b = a%b;
			a = tmp;
			i++;
		}
		else
		{
			i += a/b-1;
			a = b;
		}

	}while (a != b);
	printf("%d\n",i);
	for (int j=0;j<=i;j++)
	{
		//printf("a = %d b = %d\n",a,b);
		int tmp;
		if (m%n != 0)
		{
			tmp = n;
			printf("%d ",m/n);
			n = m%n;
			m = tmp;
		}
		else
		{
			printf("1 ");
		}
	}
}

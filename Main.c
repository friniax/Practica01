#include <stdio.h>

int main ()
{
	int aux,a,b,c;
	int n=10,Arr[n];
	
	
	for (a=0; a<n; a++)
	{
		printf("dame el dato numero: %d  \n",a+1);
		printf("dame el dato numero: %d  \n",a+1);
		scanf("%d",&Arr);
	}
		for (a=0;a<n;a++)
		{
			for (b=0;b<n-a;b++)
			{
				if (Arr[b]>=Arr[b+1])
					{
					aux=Arr[b];
					Arr[b]=Arr[b+1];
					Arr[b+1]=aux;
					}

			}			

		}
					for (c=0;c<n;c++)
					{
					printf(" %d",Arr[c]);
					}
return 0; 
}

#include<stdio.h>
int main()
{
	int a[100],n,base;
	int i=0,j,r;
  	printf("enter it..");
  	scanf("%d",&n);
  	printf("base value ");
  	scanf("%d",&base);
  	if(n!=0)
  	{
  		while(n>0)
		{
	    	r=n%base;
    		if(r<10)
    		{
	  		a[i]=r+48;
		}
		else
    		{
			a[i]=r+55;
    		}
		n=n/base;
    		i++;
    		}
    		printf("Binary :");
    		for(j=i-1;j>=0;j--)
    		{
    			printf("%c",a[j]);
    		}
	}
	else
	{
		printf("Binary :");
	}
	return 0;
}

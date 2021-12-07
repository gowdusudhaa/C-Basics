#include<stdio.h>
void main()
{
	int p,q,r,s;
	scanf("%d%d%d%d",&p,&q,&r,&s);
	if (p>q && p>r && p>s)
	{
		printf("%d is largest number",p);
	}
	else if (q>r && q>s && q>p)
	{
	 printf("%d is largest n",q);	
	}
	else if ( r>s && r>p && r>q)
	{
		printf("%d is largest ",r);
	}
	else 
	{
		printf("%d is largest ",s);
	} 
	
}

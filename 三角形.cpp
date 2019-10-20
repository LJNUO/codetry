#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("请输入三条边的长度："); 
	printf("第一条边：");scanf("%d",&a);
	printf("第二条边：");scanf("%d",&b);
	printf("第三条边：");scanf("%d",&c);
	d=a*a;
	e=b*b;
	f=c*c;
	if(a==b==c)
	printf("1");
		else if(a>b+c)
	printf("0");
	else if(b>a+c)
	printf("0");
	else if(c>a+b)
	printf("0");
	else if(a==b)
	printf("2");
	else if(b == c)
	printf("2");
	else if(a == c)
	printf("2");
	else 
	printf("3");
	return 0;
 } 

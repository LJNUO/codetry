#include<stdio.h>
int main(void)
{
	int a,b;
	printf("请输入一个整数：");
	scanf("%d",&a);
	b=2;
	while ((b*=2)<a)
	printf("比这个数小的2的乘方有：%d\n",b); 
	return 0;
 } 

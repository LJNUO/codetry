#include<stdio.h>
int main(void)
{
	int a,b;
	printf("������һ��������");
	scanf("%d",&a);
	b=2;
	while ((b*=2)<a)
	printf("�������С��2�ĳ˷��У�%d\n",b); 
	return 0;
 } 

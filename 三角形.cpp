#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("�����������ߵĳ��ȣ�"); 
	printf("��һ���ߣ�");scanf("%d",&a);
	printf("�ڶ����ߣ�");scanf("%d",&b);
	printf("�������ߣ�");scanf("%d",&c);
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

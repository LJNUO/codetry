#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("���������ſεĳɼ���\n");
	printf("�������һ�ſεĳɼ���");scanf("%d",&a);
	printf("������ڶ��ſεĳɼ���");scanf("%d",&b);
	if(a<0)
	printf("it is errow.");
	if(b<0)
	printf("it is errow.");
	c=a/60;
	d=b/60;
	e=c+d;
	switch(e){
		case 2:puts("it is pass.");break;
		case 1:	
		case 0:puts("it is not pass.");break;
	}
	return 0;
}

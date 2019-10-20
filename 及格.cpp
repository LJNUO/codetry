#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("请输入两门课的成绩。\n");
	printf("请输入第一门课的成绩：");scanf("%d",&a);
	printf("请输入第二门课的成绩：");scanf("%d",&b);
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

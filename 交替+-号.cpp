#include<stdio.h>
int main(void)

{
int a;
puts("请输入一个正整数：");
scanf ("%d",&a);
if(a<0)
puts("请输入正整数");
else
do{a--;
if(a%2)
printf("-");
else
printf("+");
}while (a>0);


return 0;

 } 

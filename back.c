#include<stdio.h>
int main(void)
{
int a;
do{
printf("请输入一个整数：");
scanf("%d",&a);
if(a<=0)
printf("请不要输入非正整数。");

}while (a<=0);
printf("该数对应的回环数是：%d",a/10);
while(a>0){
printf("%d",a%10);
a/=10;}
return 0;




}

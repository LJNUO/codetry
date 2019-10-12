#include<stdio.h>
int main(void)
{

int a;
puts("请输入一个四位整数：");scanf("%d",&a);
printf("个位数是%1d\n",a%10);
printf("十位数是%1d\n",a/10%10);
printf("百位数是%1d\n",a/100%10);
printf("千位数是%1d\n",a/1000);
return 0;
}

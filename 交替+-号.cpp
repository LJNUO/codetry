#include<stdio.h>
int main(void)

{
int a;
puts("������һ����������");
scanf ("%d",&a);
if(a<0)
puts("������������");
else
do{a--;
if(a%2)
printf("-");
else
printf("+");
}while (a>0);


return 0;

 } 

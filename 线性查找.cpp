#include<stdio.h> 
#define NUMBER 5
#define FAILED -1
int search(const int v[],int key,int n)
{int i = 0;
while(1){//如果输出1，函数结束，while输出1时满足条件（？） 
	if (i==n) 
		return FAILED;
		if(v[i]==key)
		return i;
	i++;
	
}//函数内容 
}
	int main(void)
	{int i,ky,idx;
	int vx[NUMBER];
	
	for(i=0;i<NUMBER;i++){printf("vx[%d]:",i+1);
	scanf("%d",&vx[i]);
	
	}
	printf("请输入想要查找的值：");
	scanf("%d",&ky);
	idx = search(vx,ky,NUMBER);//把idx赋值为i 
	if(idx==FAILED)
	puts("\a查找失败");
	else
	printf("%d是数组的第%d号元素\n",ky,idx + 1);
	return 0; 
	 
	}

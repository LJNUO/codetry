#include<stdio.h> 
#define NUMBER 5
#define FAILED -1
int search(const int v[],int key,int n)
{int i = 0;
while(1){//������1������������while���1ʱ�������������� 
	if (i==n) 
		return FAILED;
		if(v[i]==key)
		return i;
	i++;
	
}//�������� 
}
	int main(void)
	{int i,ky,idx;
	int vx[NUMBER];
	
	for(i=0;i<NUMBER;i++){printf("vx[%d]:",i+1);
	scanf("%d",&vx[i]);
	
	}
	printf("��������Ҫ���ҵ�ֵ��");
	scanf("%d",&ky);
	idx = search(vx,ky,NUMBER);//��idx��ֵΪi 
	if(idx==FAILED)
	puts("\a����ʧ��");
	else
	printf("%d������ĵ�%d��Ԫ��\n",ky,idx + 1);
	return 0; 
	 
	}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number[10];//����Ķ�����ָ�����������С���������ʹ��ֻ�ܴ�0--9���з��ʡ�
	printf("Please input ten numbers:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&number[i]);
	//ð������
	//
	for(int i=0;i<9;i++)
	{
		int flag=0;
		for(int j=0;j<9-i;j++)
		{
			if(number[j]>number[j+1])
			{
				int temp;
				temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
		for(int i=0;i<10;i++)
		   printf("%d   ",number[i]);

	return 0;
}
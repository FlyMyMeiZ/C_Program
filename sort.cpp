#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number[10];//数组的定义是指数组的数量大小，而数组的使用只能从0--9进行访问。
	printf("Please input ten numbers:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&number[i]);
	//冒泡排序法
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
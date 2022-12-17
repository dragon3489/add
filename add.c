#include<stdio.h>
int Add(int a,int b)
{
	int sum=a+b;
	return sum;
}
int main()
{
	int Add(int a,int b);
	int x,y,plus;
	printf("请输入两个数：\n");
	scanf("%d %d",&x,&y);
	plus=Add(x,y);
	printf("两个数的和为：%d\n",plus);
}
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
	printf("��������������\n");
	scanf("%d %d",&x,&y);
	plus=Add(x,y);
	printf("�������ĺ�Ϊ��%d\n",plus);
}
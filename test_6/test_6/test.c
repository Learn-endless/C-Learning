#define _CRT_SECURE_NO_WARNINGS 1
//��n�Ľ׳�
//#include<stdio.h>
//int fib(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++) //ѭ��ʵ��
//	{
//		ret *= i;
//	}
//	return ret;
//}
////�ݹ�����
//int Fib(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fib(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//���n���Ʋ���������
#include<stdio.h>
int Fib(int n) //ѭ��������
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int count = 0;
int Fac(int n) //�ݹ�����
{
	if (n == 3) //������쳲��������ظ��Ĵ���
		count++;
	if (n <= 2)
		return 1;
	else
		return Fac(n - 1) + Fac(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
//	printf("%d\n", count);
	return 0;
}
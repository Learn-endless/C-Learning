#define _CRT_SECURE_NO_WARNINGS 1
//求n的阶乘
//#include<stdio.h>
//int fib(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++) //循环实现
//	{
//		ret *= i;
//	}
//	return ret;
//}
////递归做法
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


//求第n个菲波那切数列
#include<stdio.h>
int Fib(int n) //循环的做法
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
int Fac(int n) //递归做法
{
	if (n == 3) //第三个斐波那契数重复的次数
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
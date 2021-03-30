#define _CRT_SECURE_NO_WARNINGS 1
//函数的申明与定义。
//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 7;
//	int b = 4;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//递归应用(自己调用自己，复杂问题简单化)
//输入一个多位数，依次输出每个位上的数字
//#include<stdio.h>
//void print(int n)          //1234   123    12    1
//{
//	if (n > 9)
//		print(n / 10);     //1234   123    12    
//	printf("%d  ", n % 10);// 4      3      2    1
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);  //1234
//	print(num);
//	return 0;
//}


//用递归求字符串的长度
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "bit" };
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


//用递归求字符串的长度（不能使用变量）
#include<stdio.h>
int my_strlen(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);   //大事化小，层层分析。
	}
	else
		return 0;
}
int main()
{
	char arr[] = { "bit" };
	int len = my_strlen(arr);
	printf("len = %d\n", len);

	return 0;
}





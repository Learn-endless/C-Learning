#define _CRT_SECURE_NO_WARNINGS 1
//�����������붨�塣
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


//�ݹ�Ӧ��(�Լ������Լ�����������򵥻�)
//����һ����λ�����������ÿ��λ�ϵ�����
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


//�õݹ����ַ����ĳ���
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


//�õݹ����ַ����ĳ��ȣ�����ʹ�ñ�����
#include<stdio.h>
int my_strlen(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);   //���»�С����������
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





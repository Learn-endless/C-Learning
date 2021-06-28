#define _CRT_SECURE_NO_WARNINGS 1
//观察浮点数在内存中的存储
//#include<stdio.h>
//int main()
//{
//	float a = 5.5;
//// 5.5
//// 101.1
//// (-1)^0 * 1.011 * 2^2
//// S=0  M=1.011  E=2
//// 0100 0000 1011 0000 0000 0000 0000 0000
//// 40b00000
//	double b = 6.5;
//// 6.5
//// 110.1
//// (-1)^0 * 1.101 * 2^2
//// S=0  M=1.101  E=2
//// 0100 0000 0001 1010 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
//// 401a000000000000
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 9;
//	float* p = (float*)&a;
//	printf("%d\n", a);  //看成整数输出--9
//
//	printf("%f\n", *p); //看成浮点数输出--0.000000
//// 0000 0000 0000 0000 0000 0000 0000 1001
//// (-1)^0 * 0.000 0000 0000 0000 0000 1001 * 2^-126
//// 0.000000
//
//	*p = 9.0;
//	printf("%d\n", a);  //看成整数输出--1091567616
//// 1001.0
//// (-1)^0 * 1.001 * 2^3
//// 0 10000010 00100000000000000000000
//// 1091567616
//
//	printf("%f\n", *p); //看成浮点数输出--9.000000
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef"; //字符串常量
//// const char* p= "abcdef";--最好这样写
//	*p = 'W';       //不能被修改
//	printf("%s", p);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";  //字符常量，首地址放到指针p里面去
//	printf("%c\n", *p);  
//	printf("%s\n", p);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = arr1;
//	char* p2 = arr2;
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char* p1 = "abcdef"; //字符串常量-不能被改变，所以只存储一份.
//	char* p2 = "abcdef"; //
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//指针数组
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int arr2[] = { 2, 3, 4, 5, 6, 7, 8 };
//	int arr3[] = { 3, 4, 5, 6, 7, 8, 9 };
//	int* p[] = { arr1, arr2, arr3 };       //创建一个指针数组，里面存放数组首地址.
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 7; j++)
//		{
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针--指向数组的指针--存放数组的地址
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr; //数组指针，指向的数组有10个整型元素。
//
//	char* arr1[5];
//	char* (*p)[5] = &arr1;   //&arr+1:跳过一个数组
//	                         //arr+1:跳过一个元素
//	return 0;
//}


//#include<stdio.h>
////用数组指针实现打印二维数组.
//void print2(int (*p)[5], int n, int m)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", *(*(p + i) + j));   //等同于 (*(p+i))[j]
//		}
//		printf("\n");
//	}
//}
////用常用的方式实现打印二维数组.
//void print1(int arr[3][5], int n, int m)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5); 
//	printf("\n");
//	print2(arr, 3, 5);
//	return 0;
//}


//打印一维数组的方法比较
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//打印二维数组的方法比较
//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//			printf("%d ", *(arr[i] + j));
//			printf("%d ", (*(arr + i))[j]);
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//尝试分析下面的代码
// int arr[5];          arr是一个数组，有5个元素，每个元素类型为int
// int* arr[10];        arr是一个数组，有10个元素，每个元素的类型为int*
// int (*arr)[10];      arr是一个指针，指向一个数组，数组有10个元素，每个元素的类型为int
// int (*arr[10])[5];   arr是一个数组，有10个元素，每个元素是一个数组指针，指向的数组元素有5个，类型为int



//一维数组传参
//#include<stdio.h>
//void test(int arr[]) //void test(int arr[10])   void test(int* arr)
//{
//	;
//}
//void test1(int* arr[10])//void test1(int* arr[])   void test1(int** arr)
//{
//	;
//}
//int main()
//{
//	int arr[10];
//	int *arr1[10];
//	test(arr);
//	test1(arr1);
//	return 0;
//}


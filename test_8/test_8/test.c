#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = { 'a', 'b', 'c' };
	char arr2[] = "abc";
	char arr3[] = { 'a', 'b', 'c', '\0' };
	//sizeof:操作符，计算字符、变量、类型所占的内存大小--字节
	printf("%d\n", sizeof(arr1));  // 3
	printf("%d\n", sizeof(arr2));  // 4
	printf("%d\n", sizeof(arr3));  // 4
	//strlen：库函数，需要头文件<string.h>,求字符串的长度，遇到'\0'停止。
	printf("%d\n", strlen(arr1));  // 随机值
	printf("%d\n", strlen(arr2));  // 3
	printf("%d\n", strlen(arr2));  // 3
	return 0;
}



//二维数组
//#include<stdio.h>
//int main()
//{
//	//二维数组初始化时必须添加 列
//	//arr[行][列]
//	//二维数组在计算机内部存储时是连续开辟空间的。
//	int arr1[][2] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	char arr2[][3] = { { 'a', 'b', 'c' }, { 'd', 'e', 'f' } };
//	char arr3[5][4] = { { 'a', 'b', 'c' }, { 'd', 'e', 'f' } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			printf("*arr1[%d][%d] = %p\n", i, j,&arr1[i][j]);
//			//printf("*arr2[%d][%d]\n", i, j);
//			//printf("*arr3[%d][%d]\n", i, j);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	sizeof(arr);              //计算整个数组的大小-字节
//	printf("%p\n", arr);      //数组首元素地址
//	printf("%p\n", &arr[0]);  //数组首元素地址
//	printf("%p\n", &arr);     //整个数组的地址
//	printf("%d\n", *arr);     //数组第一个元素
//	return 0;
//}





//写一个函数，用冒泡排序，升序排列一个整形数组
//#include<stdio.h>
//void sort_function(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{ 
//		//多少趟冒泡排序
//		int j = 0;
//		int flat = 1;//判断数组是否有序
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			//每趟冒泡排序比几次-两两一比
//			if (arr[j]>arr[j + 1])
//			{
//				//怎样比
//				int temp = 0;
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flat = 0;
//			}
//		}
//		if (1 == flat)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 9, 1, 2, 3, 4, 5, 6, 7, 8, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort_function(arr,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//递归实现字符串的逆序(不能使用函数库里的求字符串长度函数)
//#include<stdio.h>
//
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//void handle(char* p)
//{
//	int left = 0;
//	int len = my_strlen(p);
//	int temp = *(p + left);
//	*(p + left) = *(p + len - 1);
//	*(p + len - 1) = '\0';
//	if (my_strlen(p + 1) >= 2)
//		handle(p + 1);
//	*(p + len - 1) = temp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	handle(arr);
//	printf("%s\n", arr);
//}



//用递归实现，输入1729，输出19（1+7+2+9）
//#include<stdio.h>
//
//int handle(unsigned int n)
//{
//	if (n / 10 == 0)
//		return n;
//	else
//		return handle(n / 10) + (n % 10);
//}
//
//int main()
//{
//	unsigned int number;
//	int ret;
//	scanf("%u", &number);
//	ret = handle(number);
//	printf("%d\n", ret);
//}


//递归实现a^b
//#include<stdio.h>
//
//double handle(int a, int b)
//{
//	if (b < 0)
//		return (1.0 / handle(a, -b));
//	else if (b == 0)
//		return 1;
//	else
//		return a*handle(a, b - 1);
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	double ret = handle(a, b);
//	printf("%lf\n", ret);
//	return 0;
//}



//用函数的方法实现strcpy
//#include<stdio.h>
//#include<assert.h>
//
//char* My_Strcpy(char* Destination, const char* Source)
//{
//	char* ret = Destination;
//	assert(Destination != NULL);
//	assert(Source != NULL);
//	while (*Destination++ = *Source++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "####################";
//	char arr2[] = "hello world!";
//	printf("%s\n", My_Strcpy(arr1, arr2));
//	return 0;
//}


//用函数实现strlen
//#include<stdio.h>
//#include<assert.h>
//int My_strlen(const char* p)//const修饰,不能改变*p;
//{
//	int count = 0;
//	assert(p != NULL);//断言
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello world!";
//	int ret = My_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//找出单身狗
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];//异或：同出0，异出1;相同的数异或为0，0与不为0的数异或为那个数本身。
//	}
//	printf("单身狗就是：%d\n", ret);
//	return 0;
//}
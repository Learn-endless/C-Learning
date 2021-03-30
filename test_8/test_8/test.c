#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	char arr3[] = { 'a', 'b', 'c', '\0' };
//	//sizeof:操作符，计算字符、变量、类型所占的内存大小--字节
//	printf("%d\n", sizeof(arr1));  // 3
//	printf("%d\n", sizeof(arr2));  // 4
//	printf("%d\n", sizeof(arr3));  // 4
//	//strlen：库函数，需要头文件<string.h>,求字符串的长度，遇到'\0'停止。
//	printf("%d\n", strlen(arr1));  // 随机值
//	printf("%d\n", strlen(arr2));  // 3
//	printf("%d\n", strlen(arr2));  // 3
//	return 0;
//}



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


#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	sizeof(arr);              //计算整个数组的大小-字节
	printf("%p\n", arr);      //数组首元素地址
	printf("%p\n", &arr[0]);  //数组首元素地址
	printf("%p\n", &arr);     //整个数组的地址
	printf("%d\n", *arr);     //数组第一个元素
	return 0;
}





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

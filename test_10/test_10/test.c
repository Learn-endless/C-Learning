#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 9;
//	float* p = (float*)&a;
//	printf("%d\n", a);
//	printf("%f\n", *p);
//
//	*p = 9.0;
//	printf("%d\n", a);
//	printf("%f\n", *p);
//
//	return 0;
//}


//实现自己的strcpy函数
//#include<stdio.h>
//#include<assert.h>
//char* My_Strcpy(char* n,const char* m)
//{
//	char* ret = n;
//	assert(n != NULL);
//	assert(m != NULL);
//	while (*n != '\0')
//		n++;
//	while (*m != '\0')
//	{
//		*n = *m;
//		m++;
//		n++;
//	}
//	*n = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[100];
//	char arr2[50];
//	printf("请输入所需拷贝到的字符串：");
//	gets(arr1);
//	printf("请输入所需拷贝的内容：");
//	gets(arr2);
//	printf("连接后的目标字符串为：");
//	printf("%s\n", My_Strcpy(arr1, arr2));
//	return 0;
//}


//选择排序
//#include<stdio.h>
//
//void my_sort(int* p, int n)
//{
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//	{
//		int dex = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (*(p + dex) < *(p + j))
//				dex = j;
//		}
//		int temp = *(p + dex);
//		*(p + dex) = *(p + i);
//		*(p + i) = temp;
//	}
//}
//
//int main()
//{
//	int arr[100];
//	int num;
//	int i;
//	printf("请输入需要排序的个数：");
//	scanf("%d", &num);
//	printf("请输入需要排的数据：");
//	for (i = 0; i < num; i++)
//		scanf("%d", arr + i);
//	my_sort(arr, num);
//	for (i = 0; i < num; i++)
//		printf("%d ", *(arr+ i));
//
//	return 0;
//}


//冒泡排序
//#include<stdio.h>
//
//void my_sort(int* p, int n)
//{
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (*(p + j)<*(p + j + 1))
//			{
//				int temp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[100];
//	int num;
//	int i;
//	printf("请输入个数：");
//	scanf("%d", &num);
//	printf("请输入数组：");
//	for (i = 0; i < num; i++)
//		scanf("%d", arr + i);
//	my_sort(arr, num);
//	for (i = 0; i < num; i++)
//		printf("%d ", *(arr + i));
//	return 0;
//}
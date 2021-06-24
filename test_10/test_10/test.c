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



//辗转相除法（函数求解）
//#include<stdio.h>
////最大公约数
//int Max_factor(int p, int q)
//{
//	int ret = p%q;
//	while (ret)
//	{
//		p = q;
//		q = ret;
//		ret = p%q;
//	}
//	return q;
//}
////最小公倍数
//int Min_times(int max, int p, int q)
//{
//	return p*q / max;
//}
//
//int main()
//{
//	int n, m;
//	printf("请输入两个数：");
//	scanf("%d %d", &n, &m);
//	printf("最大公因数为：%d\n", Max_factor(n, m));
//	printf("最小公倍数为：%d\n", Min_times(Max_factor(n, m), n, m));
//	return 0;
//}



//二分查找
//#include<stdio.h>
//int My_search(int* p, int n, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left <= right)   //等于不能掉
//	{
//		mid = (left + right) / 2;
//		if (*(p + mid) > n)
//			right = mid;        //可-1可不-1
//		else if (*(p + mid) < n)
//			left = mid + 1;   //左边一定要+1
//		else
//			break;
//	}
//	if (left > right)
//		return -1;
//	else
//		return mid;
//}
//
//int main()
//{
//	int n, ret;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入需要查找的内容：");
//	scanf("%d", &n);
//	ret = My_search(arr, n, sz);
//	if (ret != -1)
//		printf("找到了，标为%d\n", ret);
//	else
//		printf("没找到！\n");
//	return 0;
//}



//实现一个字符串的逆序排放
//#include<stdio.h>
//#include<string.h>
//void Reverse(char* p, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char temp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = temp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[10] = "987654321";
//
//	int sz = strlen(arr);
//	Reverse(arr, sz);
//	printf("%s", arr);
//	return 0;
//}



//递归实现一个多位数反向输出：如：输入123，输出321;输入1234，输出4321
//#include<stdio.h>
//void print(int num) 
//{
//	if (num < 10)
//		printf("%d", num);
//	else 
//	{
//		printf("%d", num % 10);
//	    print(num / 10);
//	}
//}
//
//int main() 
//{
//	int num;
//	printf("请输入一个小于100000的正整数：");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
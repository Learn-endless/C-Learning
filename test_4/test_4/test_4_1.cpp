#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，用来交换两个整形变量的值。
//#include<stdio.h>
//void  Swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//写一个函数，判断100到200之间的数是不是素数。
//#include<stdio.h>
//int Judge(int a)
//{
//	int j = 0;
//	extern int i;
//	for (j = 2; j < a; j++)
//	{
//		if (a%j == 0)
//			break;
//	}
//	if (a == j)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (Judge(i)==1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}



//写一个函数，输出1000-2000之间的闰年
//#include<stdio.h>
//int leap_year(int num)
//{
//	if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
//		return 1;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (1 == leap_year(i))
//			printf("%d ", i);
//	}
//	return 0;
//}



//写一个函数，可以实现一个整形有序数组的二分查找。
//#include<stdio.h>
////找到了返回下标，找不到返回-1。
//int binary_search(int arr[], int k,int num)
//{
//	int left = 0;
//	int right = num - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid]>k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//    ret=binary_search(arr, k, num);
//	if (-1 == ret)
//		printf("找不到%d\n", k);
//	else
//		printf("找到了，下标是 %d\n", ret);
//	return 0;
//}



//写一个函数，当每次函数运行一次，num就加1.
//#include<stdio.h>
//void Add(int* p)    //没有返回值，用void
//{
//	(*p)++;        //*的优先级低于++
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}




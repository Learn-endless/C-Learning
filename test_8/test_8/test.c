#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = { 'a', 'b', 'c' };
	char arr2[] = "abc";
	char arr3[] = { 'a', 'b', 'c', '\0' };
	//sizeof:�������������ַ���������������ռ���ڴ��С--�ֽ�
	printf("%d\n", sizeof(arr1));  // 3
	printf("%d\n", sizeof(arr2));  // 4
	printf("%d\n", sizeof(arr3));  // 4
	//strlen���⺯������Ҫͷ�ļ�<string.h>,���ַ����ĳ��ȣ�����'\0'ֹͣ��
	printf("%d\n", strlen(arr1));  // ���ֵ
	printf("%d\n", strlen(arr2));  // 3
	printf("%d\n", strlen(arr2));  // 3
	return 0;
}



//��ά����
//#include<stdio.h>
//int main()
//{
//	//��ά�����ʼ��ʱ������� ��
//	//arr[��][��]
//	//��ά�����ڼ�����ڲ��洢ʱ���������ٿռ�ġ�
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
//	sizeof(arr);              //������������Ĵ�С-�ֽ�
//	printf("%p\n", arr);      //������Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);  //������Ԫ�ص�ַ
//	printf("%p\n", &arr);     //��������ĵ�ַ
//	printf("%d\n", *arr);     //�����һ��Ԫ��
//	return 0;
//}





//дһ����������ð��������������һ����������
//#include<stdio.h>
//void sort_function(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{ 
//		//������ð������
//		int j = 0;
//		int flat = 1;//�ж������Ƿ�����
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			//ÿ��ð������ȼ���-����һ��
//			if (arr[j]>arr[j + 1])
//			{
//				//������
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


//�ݹ�ʵ���ַ���������(����ʹ�ú�����������ַ������Ⱥ���)
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



//�õݹ�ʵ�֣�����1729�����19��1+7+2+9��
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


//�ݹ�ʵ��a^b
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



//�ú����ķ���ʵ��strcpy
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


//�ú���ʵ��strlen
//#include<stdio.h>
//#include<assert.h>
//int My_strlen(const char* p)//const����,���ܸı�*p;
//{
//	int count = 0;
//	assert(p != NULL);//����
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


//�ҳ�����
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];//���ͬ��0�����1;��ͬ�������Ϊ0��0�벻Ϊ0�������Ϊ�Ǹ�������
//	}
//	printf("�������ǣ�%d\n", ret);
//	return 0;
//}
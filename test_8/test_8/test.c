#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	char arr3[] = { 'a', 'b', 'c', '\0' };
//	//sizeof:�������������ַ���������������ռ���ڴ��С--�ֽ�
//	printf("%d\n", sizeof(arr1));  // 3
//	printf("%d\n", sizeof(arr2));  // 4
//	printf("%d\n", sizeof(arr3));  // 4
//	//strlen���⺯������Ҫͷ�ļ�<string.h>,���ַ����ĳ��ȣ�����'\0'ֹͣ��
//	printf("%d\n", strlen(arr1));  // ���ֵ
//	printf("%d\n", strlen(arr2));  // 3
//	printf("%d\n", strlen(arr2));  // 3
//	return 0;
//}



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


#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	sizeof(arr);              //������������Ĵ�С-�ֽ�
	printf("%p\n", arr);      //������Ԫ�ص�ַ
	printf("%p\n", &arr[0]);  //������Ԫ�ص�ַ
	printf("%p\n", &arr);     //��������ĵ�ַ
	printf("%d\n", *arr);     //�����һ��Ԫ��
	return 0;
}





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

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


//ʵ���Լ���strcpy����
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
//	printf("���������追�������ַ�����");
//	gets(arr1);
//	printf("���������追�������ݣ�");
//	gets(arr2);
//	printf("���Ӻ��Ŀ���ַ���Ϊ��");
//	printf("%s\n", My_Strcpy(arr1, arr2));
//	return 0;
//}


//ѡ������
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
//	printf("��������Ҫ����ĸ�����");
//	scanf("%d", &num);
//	printf("��������Ҫ�ŵ����ݣ�");
//	for (i = 0; i < num; i++)
//		scanf("%d", arr + i);
//	my_sort(arr, num);
//	for (i = 0; i < num; i++)
//		printf("%d ", *(arr+ i));
//
//	return 0;
//}


//ð������
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
//	printf("�����������");
//	scanf("%d", &num);
//	printf("���������飺");
//	for (i = 0; i < num; i++)
//		scanf("%d", arr + i);
//	my_sort(arr, num);
//	for (i = 0; i < num; i++)
//		printf("%d ", *(arr + i));
//	return 0;
//}
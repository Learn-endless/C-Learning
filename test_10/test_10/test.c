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



//շת�������������⣩
//#include<stdio.h>
////���Լ��
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
////��С������
//int Min_times(int max, int p, int q)
//{
//	return p*q / max;
//}
//
//int main()
//{
//	int n, m;
//	printf("��������������");
//	scanf("%d %d", &n, &m);
//	printf("�������Ϊ��%d\n", Max_factor(n, m));
//	printf("��С������Ϊ��%d\n", Min_times(Max_factor(n, m), n, m));
//	return 0;
//}



//���ֲ���
//#include<stdio.h>
//int My_search(int* p, int n, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left <= right)   //���ڲ��ܵ�
//	{
//		mid = (left + right) / 2;
//		if (*(p + mid) > n)
//			right = mid;        //��-1�ɲ�-1
//		else if (*(p + mid) < n)
//			left = mid + 1;   //���һ��Ҫ+1
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
//	printf("��������Ҫ���ҵ����ݣ�");
//	scanf("%d", &n);
//	ret = My_search(arr, n, sz);
//	if (ret != -1)
//		printf("�ҵ��ˣ���Ϊ%d\n", ret);
//	else
//		printf("û�ҵ���\n");
//	return 0;
//}



//ʵ��һ���ַ����������ŷ�
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



//�ݹ�ʵ��һ����λ������������磺����123�����321;����1234�����4321
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
//	printf("������һ��С��100000����������");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("%d %d %d\n", a, b, c);
	return 0;
}



//#include<stdio.h>
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;      // ��С�ˣ����������ֽڵ�˳��
//}
//
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//		printf("С��\n");  //С�˴洢�����ݵ�λ�ŵ��洢��λ����λ�ŵ��洢��λ
//	else                   //С���ֽ���洢ģʽ
//		printf("���\n");  //��˴洢�����ݵ�λ�ŵ��洢��λ����λ�ŵ��洢��λ
//	                       //����ֽ���洢ģʽ
//	return 0;
//}
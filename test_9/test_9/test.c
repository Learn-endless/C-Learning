#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//int main()
//{
//	char a = -128;     //һ��char��Χ��-128~127
//	printf("%u\n", a);
//	char b = 128;      //128=127+1(char����127)
//	printf("%u\n", b); //1111 1111 1111 1111 1111 1111 1000 0000
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



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
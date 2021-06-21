#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//int main()
//{
//	char a = -128;     //一个char范围：-128~127
//	printf("%u\n", a);
//	char b = 128;      //128=127+1(char最大放127)
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
//	return *(char*)&a;      // 大小端：描述的是字节的顺序
//}
//
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//		printf("小端\n");  //小端存储，数据低位放到存储低位，高位放到存储高位
//	else                   //小端字节序存储模式
//		printf("大端\n");  //大端存储，数据低位放到存储高位，高位放到存储低位
//	                       //大端字节序存储模式
//	return 0;
//}
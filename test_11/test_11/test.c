#define _CRT_SECURE_NO_WARNINGS 1
//观察浮点数在内存中的存储
//#include<stdio.h>
//int main()
//{
//	float a = 5.5;
//// 5.5
//// 101.1
//// (-1)^0 * 1.011 * 2^2
//// S=0  M=1.011  E=2
//// 0100 0000 1011 0000 0000 0000 0000 0000
//// 40b00000
//	double b = 6.5;
//// 6.5
//// 110.1
//// (-1)^0 * 1.101 * 2^2
//// S=0  M=1.101  E=2
//// 0100 0000 0001 1010 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
//// 401a000000000000
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 9;
//	float* p = (float*)&a;
//	printf("%d\n", a);  //看成整数输出--9
//
//	printf("%f\n", *p); //看成浮点数输出--0.000000
//// 0000 0000 0000 0000 0000 0000 0000 1001
//// (-1)^0 * 0.000 0000 0000 0000 0000 1001 * 2^-126
//// 0.000000
//
//	*p = 9.0;
//	printf("%d\n", a);  //看成整数输出--1091567616
//// 1001.0
//// (-1)^0 * 1.001 * 2^3
//// 0 10000010 00100000000000000000000
//// 1091567616
//
//	printf("%f\n", *p); //看成浮点数输出--9.000000
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef"; //字符串常量
//// const char* p= "abcdef";--最好这样写
//	*p = 'W';       //不能被修改
//	printf("%s", p);
//	return 0;
//}
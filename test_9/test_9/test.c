#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char a = 128;  //char 范围：-128-127       //1111 1111 1111 1111 1111 1111 1000 0000
//	char b = -128;
//	printf("%u\n", a); //unsigned int 输出：   //4294967168
//	printf("%u\n", b);                         //4294967168
//	return 0;
//}



//#include<stdio.h>
//int main()                  //1000 0000 0000 0000 0000 0000 0001 0100  ---20
//{                           //1111 1111 1111 1111 1111 1111 1110 1011  ---反码
//    int i = -20;            //1111 1111 1111 1111 1111 1111 1110 1100  ---补码
//	unsigned int j = 10;      //0000 0000 0000 0000 0000 0000 0000 1010  ---10
//	printf("%d\n", i + j);    //1111 1111 1111 1111 1111 1111 1111 0110  ---i+j 补码
//	return 0;                 //1111 1111 1111 1111 1111 1111 1111 0101  ---反码
//}                           //1000 0000 0000 0000 0000 0000 0000 1010  --- 原码：-10



//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	unsigned int i;  //无符号数永远大于等于0；
//	for (i = 9; i >= 0; i--)  //死循环，0-1=-1:1111 1111 1111 1111 1111 1111 1111 1111=4,294,967,295
//	{
//		Sleep(1000);
//		printf("%u\n", i);
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000];       //char最大存放-128-127
//	int i;
//	for (i = 0; i <= 999; i++)
//	{
//		arr[i] = -1 - i;  //arr[1000]={-1,-2,-3,...,-128,127,126,...,2,1,0,-1,-2,...};
//	}
//	printf("%d\n", strlen(arr)); // '\0'为结束标志,所以打印为：128+127=255字符串长度。
//	return 0;
//}



//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	unsigned char i;              //char 的范围：0-255    255+1=0
//	for (i = 0; i <= 255; i++)      
//	{
//		Sleep(100);
//		printf("%d\n", i);        //死循环
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int i, j;
//	for (i = 0; i < 10; i++)
//		scanf("%d", a+i);
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(a+i));
//	return 0;
//}


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
//	printf("%d %d %d\n", a, b, c);  // -1  -1  1111 1111=255
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
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test(int** ptr) //使用二级指针用来作为函数的形式参数时，主函数可以传实参。
{
}

int main()
{
	int a = 10;
	int* p = &a;     //定义一个一级指针，存放整形变量元素a的地址。
	int** pp = &p;   //定义一个二级整形指针，用来存放一个一级指针的地址。
	int* arr1[5];    //整形指针数组，存放整形元素的地址
	test(&p);        //传一级指针的地址。
	test(pp);        //传二级指针变量名。
	test(arr1);      //传一个一级整形指针数组的首元素地址。

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ�������ȡ���������룺������\n");
	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
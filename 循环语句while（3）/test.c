#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
int main()
{
	//
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);			//假如输入: 123456(实际123456\n - 在键盘写入完成使用回车时自动输入) 可以使用gets函数
	printf("请确认密码（Y/N）:>");

	//int ch = getchar();			//若使用该代码缓冲区会留下\n直接运行，需清理缓冲区
	//getchar();					//消耗缓冲区,但不能正常消耗空格后的输入值
	int tmp = 0;					//清理缓冲区的多个字符
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	int ch = getchar();

	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	return 0;
}

//getchar 与 scanf 作为输入函数不会直接从键盘拿到数据，而是其两者之间的缓冲区拿取数据
//若缓冲区没有数据，则会等待数据进入缓冲区
#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
int main()
{
	//
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);			//��������: 123456(ʵ��123456\n - �ڼ���д�����ʹ�ûس�ʱ�Զ�����) ����ʹ��gets����
	printf("��ȷ�����루Y/N��:>");

	//int ch = getchar();			//��ʹ�øô��뻺����������\nֱ�����У�����������
	//getchar();					//���Ļ�����,�������������Ŀո�������ֵ
	int tmp = 0;					//���������Ķ���ַ�
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	int ch = getchar();

	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
	return 0;
}

//getchar �� scanf ��Ϊ���뺯������ֱ�ӴӼ����õ����ݣ�����������֮��Ļ�������ȡ����
//��������û�����ݣ����ȴ����ݽ��뻺����
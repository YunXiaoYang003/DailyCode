#define _CRT_SECURE_NO_WARNINGS 1
#include"user.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	User* phead = NULL;
	int x;
	//��ʼ������
	char telephone[12] = { 0 };
	char nickname[20];
	int sex = 0;//0ΪŮ��1λ�С�
	int age = 18;


	while (1)
	{
		printf("*****************�ֻ��˶���Ϣ����ϵͳ*****************\n");
		printf("--------------------�û���Ϣ����----------------------\n");
		printf("1�������û�  2��ɾ���û�  3����ѯ�û�  4���޸��û�\n");
		printf("--------------------�˶���Ϣ����--------------------\n");
		printf("5������û���Ϣ 6���޸��û���Ϣ 7����ʾ�����û��˶���Ϣ\n");
		printf("--------------------�˶����а�--------------------\n");
		printf("8���������а� 9�������˶����а� 10��һ�����а�\n");
		printf("-------------------�����˶�·��-------------------\n");
		printf("11�������˶�·��  12��ѡ���˶�·��\n");
		printf("-------------------�����ļ�����-------------------\n");
		printf("     13�����ݼ���              14�����ݱ���\n");
		printf("\n");
		printf("                                         0���˳�\n");
		printf("*****************************************************\n");
		printf("��ѡ�����������0-14��\n");
		scanf("%d", &x);
		switch (x)
		{
		case 0:
			printf("лл��ʹ�ñ�ϵͳ���ټ�����\n");
			return 1;
		case 1://�����û�
		{
			printf("������Ҫ�����û��ĸ�����Ϣ��\n");
			printf("Ҫ�����û����ֻ��š��ǳơ��Ա�(0ΪŮ��1Ϊ��)������ֱ�Ϊ�����Կո�ָ���\n");
			scanf("%s %s %d %d", telephone, nickname, &sex, &age);
				UserPushFront(&phead, telephone, nickname, sex, age);//ͷ�壬������û���

				UserPrint(phead);//��ӡ�����û���Ϣ

			continue;
		}
		case 2://ɾ���û�
		{
			int i = 0;
			printf("����Ը����û��Ż��û��ǳ����ַ�ʽ��ѯ�û���Ϣ������ɾ������ѡ���ѯģʽ��  1.�����û���   2.�ǳƣ�\n");
			scanf("%d", &i);
			switch (i)
			{
			case 1:// 1.�����û���
			{
				printf("\n������Ҫ��ѯ���û��ţ�");
				scanf("%s", telephone);
				User* cur = UserNumFind(phead, telephone);
				if (cur == NULL)
				{
					printf("�����û������󣬵�ǰû�и��û�����");
				}
				else
					printf("�ҵ��ˣ�\n�����Ƿ�ȷ��ɾ���� 1.ȷ��ɾ��  2.���˲���\n");
				int j = 0;
				scanf("%d", &j);
				if (j == 1)
				{
					UserErase(&phead, cur);// ɾ��curλ��
				}
				
				UserPrint(phead);//��ӡ�����û���Ϣ

			}
			   break;
			case 2:
			{
				printf("\n������Ҫ��ѯ���û��ǳƣ�");
				scanf("%s", nickname);
				User* cur = UserNameFind(phead, nickname);
				if (cur == NULL)
				{
					printf("�����û������󣬵�ǰû�и��û��ǳƣ�");
				}
				else
					printf("�ҵ��ˣ�\n�����Ƿ�ȷ��ɾ���� 1.ȷ��ɾ��  2.���˲���");
				int j = 0;
				scanf("%d", &j);
				if (j == 1)
				{
					UserErase(&phead, cur);// ɾ��curλ��
				}
				
				UserPrint(phead);//��ӡ�����û���Ϣ

			}
			  break;
			default:
				printf("�������\n");
				break;

			}
			continue;
		}			
		case 3:
			continue;
		case 5:
			continue;
		case 6:
			continue;
		case 7:
			continue;
		case 8:
			continue;
		case 9:
			continue;
		case 10:
			continue;
		case 11:
			continue;
		case 12:
			continue;
		case 13:
			continue;
		case 14:
			continue;
		}
	}
	return 0;
}
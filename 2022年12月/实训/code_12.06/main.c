#define _CRT_SECURE_NO_WARNINGS 1
#include"user.h"
#include"move.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	User* phead = NULL;
	int x;
	//��ʼ������
	char telephone[20] = { 0 };
	char nickname[20] = { 0 };
	int sex = 0;//0ΪŮ��1λ�С�
	int age = 18;
	int move[7] = { 0 };
	int StepNum;//�˶�����
	int MoveDay;
	int Con_Day;//��������

	while (1)
	{
		printf("*****************�ֻ��˶���Ϣ����ϵͳ*****************\n");
		printf("--------------------�û���Ϣ����----------------------\n");
		printf("1�������û�  2��ɾ���û�  3����ѯ�û�  4���޸��û�\n");
		printf("--------------------�˶���Ϣ����--------------------\n");
		printf("5������û��˶���Ϣ 6���޸��û��˶���Ϣ 7����ʾ�����û��˶���Ϣ\n");
		printf("--------------------�˶����а�--------------------\n");
		printf("8���������а� 9�������˶����а� 10��һ�����а�\n");
		printf("-------------------�����˶�·��-------------------\n");
		printf("11�������˶�·��  12��ѡ���˶�·��\n");
		printf("-------------------�����ļ�����-------------------\n");
		printf("     13�����ݼ���              14�����ݱ���\n");
		printf("                   0���˳�\n");
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
			printf("Ҫ�����û����ֻ��š��ǳơ��Ա�(0ΪŮ��1Ϊ��)������ֱ�Ϊ��\n");
			printf("Ҫ�����û����ֻ���:��Ҫ����11λ,�������룩");
			scanf("%s",telephone);
			printf("Ҫ�����û����ǳ�:");
			scanf("%s", nickname);
			printf("Ҫ�����û����Ա�(0ΪŮ��1Ϊ��)��");
			scanf("%d", &sex);
			if ((sex !=  0) && (sex != 1))
			{
				printf("������󣡣���");
				break;
			}
			printf("Ҫ�����û������䣨������С��0���ߴ���150����");
			scanf("%d", &age);
			if ((age< 0) && (age>200))
			{
				printf("������󣡣���");
				break;
			}
			UserPushFront(&phead, telephone, nickname, sex, age);//ͷ�壬������û���
			UserPrint(phead);//��ӡ�����û���Ϣ
			MoveInt(phead);//��ʼ���˶�����
		}
		continue;
		case 2://ɾ���û�:�ɸ����û��ź��ǳƽ���ɾ����ɾ��֮ǰ�Ȳ�ѯ���ҵ������Ҫ��ɾ��ȷ�ϲſ������ɾ��������
		{
			int i = 0;
			printf("����Ը����û��Ż��û��ǳ����ַ�ʽ��ѯ�û���Ϣ������ɾ������ѡ���ѯģʽ��  1.�����û���   2.�ǳƣ�\n");
			scanf("%d", &i);
			switch (i)
			{
				//�����û�:Ҫ�������û����û��ţ��ֻ��ţ����ǳơ��Ա��������Ϣ���˶��������˶���Ϣ��������ӣ�ƽ�������������˶�����ͨ�������á�
			case 1:// 1.�����û���
			{
				printf("������Ҫ��ѯ���û��ţ�");
				scanf("%s", telephone);
				User* cur = UserNumFind(phead, telephone);
				if (cur == NULL)
					printf("�����û������󣬵�ǰû�и��û�����");
				else
					printf("�ҵ��ˣ�\n�����Ƿ�ȷ��ɾ���� 1.ȷ��ɾ��  2.���˲���\n");
				int j = 0;
				scanf("%d", &j);
				if (j == 1)
					UserErase(&phead, cur);// ɾ��curλ��
				UserPrint(phead);//��ӡ�����û���Ϣ
			}
			break;
			case 2:
			{
				printf("������Ҫ��ѯ���û��ǳƣ�");
				scanf("%s", nickname);
				User* cur = UserNameFind(phead, nickname);
				if (cur == NULL)
					printf("�����û������󣬵�ǰû�и��û��ǳƣ�");
				else
					printf("�ҵ��ˣ�\n�����Ƿ�ȷ��ɾ���� 1.ȷ��ɾ��  2.���˲���");
				int j = 0;
				scanf("%d", &j);
				if (j == 1)
					UserErase(&phead, cur);// ɾ��curλ��
				UserPrint(phead);//��ӡ�����û���Ϣ
			}
			break;
			default:
				printf("�������\n");
				break;
			}
		}
		continue;
		case 3://��ѯ�û����ɸ����û��š��Ա������˶������Ƚ��в�ѯ��Ҫ����ʾ���з�����������Ϣ��
		{
			int i = 0;
			printf("����Ը����û��š��Ա������˶������Ƚ��в�ѯ����ѡ����Ҫ��ѯ�ķ�ʽ��1.�û���  2.�Ա�  3.�����˶�����\n");
			scanf("%d", &i);
			switch (i)
			{
			case 1://1.�û���  
			{
				printf("������Ҫ��ѯ���û��ţ�");
				scanf("%s", telephone);
				User* cur = UserNumFind(phead, telephone);
				if (cur == NULL)
					printf("�����û������󣬵�ǰû�и��û�����");
				else
					printf("�ҵ��ˣ�\n");
				UserPrint(phead);//��ӡ�����û���Ϣ
			}
			break;
			case 2://2.�Ա�
			{		printf("������Ҫ��ѯ���Ա�");
			scanf("%d", &sex);
			User* cur = UserSexFind(phead, sex);
			if (cur == NULL)
			{
				printf("�����Ա���󣬵�ǰû�и��Ա�\n");
			}
			else
				printf("�ҵ��ˣ�\n");
			UserPrint(phead);//��ӡ�����û���Ϣ
			}
			break;
			case 3://3.�����˶�����
			{
				printf("������Ҫ��ѯ�������˶�������");
				scanf("%d", &Con_Day);
				User* cur = UserConDayFind(phead, Con_Day);
				if (cur == NULL)
					printf("���������˶��������󣬵�ǰû�и������˶�������");
				else
					printf("�ҵ��ˣ�\n");
				UserPrint(cur);//��ӡ�����û���Ϣ
			}
			break;
		    defalut:
			printf("�������");
			break;
			}
		}
		continue;
		case 4://�޸��û�:�����޸ĵ��û���Ϣ�����û��š��ǳơ��Ա�����ȡ��޸��û��ź�һ��Ҫ��֤�µ��û�����Ψһ�ġ�			
		{
			printf("������Ҫ�޸ĵ��û���Ϣ���û��ţ�");
			scanf("%s", telephone);
			User* cur = UserNumFind(phead, telephone);
			if (cur == NULL)
				printf("�����û��Ŵ��󣬵�ǰû�и��û��ţ�");
			else
			{
				printf("�ҵ��ˣ�\n");
				printf("��������Ҫ�޸ĵ��û���Ϣ�� 1.�û���  2.�ǳ�  3.�Ա�  4.����");
				int i = 0;
				scanf("%d", &i);
				switch (i)
				{
				case 1://1.�û���  			
				{
					char mid[12] = { 0 };
					printf("������Ҫ�޸ĵ��û��ţ�����ȷ�����û�����Ψһ�ģ�");
					scanf("%s", mid);
					User* pre = phead;
					while (pre != NULL)
					{
						if (strcmp(cur->telephone, mid) == 0)
							printf("�������û���Ψһ������");
						pre = pre->next;
					}
					strcpy(cur->telephone, mid);
				}
				break;
				case 2:
				{
					char mid[20] = { 0 };
					printf("������Ҫ�޸ĵ��û��ǳƣ�");
					scanf("%s", mid);
					strcpy(cur->nickname, mid);
				}
				break;
				case 3:
				{
					int sex = 0;
					printf("������Ҫ�޸ĵ��û��Ա�");
					scanf("%d", sex);
					cur->sex = sex;
				}
				break;
				case 4:
				{
					int age = 0;
					printf("������Ҫ�޸ĵ��û����䣺");
					scanf("%d", age);
					cur->age = age;
				}
				break;
				default :
				printf("�������");
				break;
				}
			}
			
		}
		continue;
		case 5://����û��˶���Ϣ
		{
			printf("��������Ҫ��ӵ��û����û��ţ�");
			scanf("%s", telephone);
			User* cur = UserNumFind(phead, telephone);
			if (cur == NULL)
				printf("�����û������󣬵�ǰû�и��û�����");
			else
				printf("�ҵ��ˣ�\n");
			int today = IsDay(cur->move);//6,5,4,3,2,1,0
			printf("�����������˶�������");
			scanf("%d", &StepNum);
			OrderDay(cur->move, today, StepNum);//����˳���Ƿ�������,��������
		}
			continue;
		case 6://6���޸��û��˶���Ϣ
		{
			printf("��������Ҫ��ӵ��û����û��ţ�");
			scanf("%s", telephone);
			User* cur = UserNumFind(phead, telephone);
			if (cur == NULL)
				printf("�����û������󣬵�ǰû�и��û�����");
			else
				printf("�ҵ��ˣ�\n");
			int today = IsDay(cur->move);//6,5,4,3,2,1,0
			printf("������Ҫ�޸�Ϊ���˶�������");
			scanf("%d", &StepNum);
			cur->move[today] = StepNum;
		}
			continue;
		case 7://��ʾ�����û��˶���Ϣ
		{
			MovePrint(phead);
		}
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

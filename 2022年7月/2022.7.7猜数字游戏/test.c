#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("########################\n");
	printf("##########1.play##########\n");
	printf("##########0.exit##########\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	while (1)
	{
		printf("guess the num:\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("guess a little!\n");
		}
		else if (guess > ret)
			printf("guess the bigger!\n");
		else
		{
			printf("congratulations!guess the right!\n");
			break;
		}
	}
}
int main(void)
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please choose:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); break;
		case 0: printf("exit game!"); break;
		defalut:printf("choose wrong!choose again!");
		}
	} while (input);
			return 0;
}
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DispalyBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
//��û��������������
void ComputerMove(char board[ROW][COL], int row, int col);

//
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ�� - 'Q'
//���� - 'C'
//

char IsWin(char board[ROW][COL], int row, int col);
//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define ROW 3//line,row
//#define COL 3//column
//
////Initialize the checkboard
//void InitBoard(char board[ROW][COL], int row, int col);
////print the checkboard
//void DispalyBoard(char board[ROW][COL], int row, int col);
////player to paly chess
//void PlayerMove(char board[ROW][COL], int row, int col);
////computer to play chess
//void ComputerMove(char board[ROW][COL], int row, int col);
////��û������ĵط�����
//char ISWarBoard(char board[ROW][COL], int row, int col);

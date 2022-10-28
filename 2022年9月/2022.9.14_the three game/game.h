#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
//找没有下棋的随机下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//
//玩家赢 - '*'
//电脑赢 - '#'
//平局 - 'Q'
//继续 - 'C'
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
////找没有下棋的地方下棋
//char ISWarBoard(char board[ROW][COL], int row, int col);

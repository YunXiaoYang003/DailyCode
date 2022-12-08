/*
文件名：User.cpp 
功  能：系统的基本数据User 
*/
#ifndef _USER_H_
#define _USER_H_

#include<iostream>
#include<string>
using namespace std;

struct User
{
	string id;           //用户号，手机号
	string name;         //昵称 
	char sex;            //性别
	int  age;            //年龄 
	int  stepnum[7];    //运动步数 	
};

#endif

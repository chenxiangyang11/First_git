/*
 * @Author: chenxiangyang11 1603897676@qq.com
 * @Date: 2025-04-21 15:26:08
 * @LastEditors: chenxiangyang11 1603897676@qq.com
 * @LastEditTime: 2025-04-21 15:29:34
 * @FilePath: \First_git\string.cpp
 * @Description: 
 */
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"Enter two strings : ";
	getline(cin,s1);
	getline(cin,s2);
	cout<<"Concatenated string : "<<s1+s2;
	return 0;
}
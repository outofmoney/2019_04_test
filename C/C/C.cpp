// C.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	char c[] = "abcdefg";
	cout << c << &c<<endl;

	c[1] = 'B';
	cout << c << &c << endl;

	int a = 123;
	float b = 3.14159265409876543212345678893;
	cout << a << "\t" << b << endl;


	return 0;
}


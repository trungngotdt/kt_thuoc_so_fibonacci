// kt_thuoc_so_fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void ktfb(int a)
{
	int f3 = 0;
	int f1 = 1;
	int f2 = 1;
	
	while (f3<a)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;

	}
	if (a==f3)
	{
		return 1;
	} 
	else
	{
		return 0;
	}
}
int main()
{
	int a;
	printf_s("nhap so a:");
	scanf_s("%d", &a);
	printf_s("%d",ktfb(a));
    _getch();
}


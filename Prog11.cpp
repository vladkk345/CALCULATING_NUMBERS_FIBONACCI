// Prog11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <windows.h>

int Fibonacci(int n);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	x = Fibonacci(5);
	printf("Результат %d\n", x);

	return 0;
}

int Fibonacci(int n)
{
	int res = 1, temp = 0;

	for (int i = 1; i < n; i++)
	{	
		res = res + temp;
		temp = res - temp;
	}
	return res;
}
/*
Задание 6: Пользователь вводит целое число.Необходимо вывести все целые числа, на которое заданное число делиться без остатка.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int num;
	cout << "Введите целое число: \n";
	cin >> num;
	cout << "Все целые числа, на которые заданное число делиться без остатка:\n";
	num = (num < 0) ? -num : num;
	for (int i = -num; i <= num; i++)
	{
		if (i == 0) continue;
		if (num % i == 0)
		{
			cout << i << ' ';
		}
	}
	cout << endl;
	return 0;
}

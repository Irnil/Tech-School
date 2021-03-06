#include "stdafx.h"
#include <iostream>
#include "Abstract_Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Parallelepiped Par(0.0, 0.0, 0.0);
	Ball Ball(0.0);
	char key = ' ';

	while (key != '5')
	{
		cout << "Меню\n";
		cout << "1: Параллелепипед\n";
		cout << "2: Шар\n";
		cout << "3: Вывести данные о параллелепипеде\n";
		cout << "4: Вывести данные о шаре\n";
		cout << "5: Выход\n";
		cout << "Ввод: ";
		cin >> key;

		switch (key)
		{
		case '1':
		{
			cout << endl;
			cout << "Параллелепипед\n";
			cout << "1: Ввести данные\n";
			cout << "2: Вычислить площадь поверхности\n";
			cout << "3: Вычислить объем\n";
			cout << "4: Выход в главное меню\n";
			cout << "Ввод: ";
			cin >> key;

			switch (key)
			{
			case '1':
			{
				Par.setData();
				break;
			}
			case '2':
			{
				Par.squareSurface();
				break;
			}
			case '3':
			{
				Par.squareVolume();
				break;
			}
			case '4':
			{
				system("cls");
				key = ' ';
				break;
			}
			}
			break;
		}
		case '2':
		{
			cout << endl;
			cout << "Шар\n";
			cout << "1: Ввести данные\n";
			cout << "2: Вычислить площадь поверхности\n";
			cout << "3: Вычислить объем\n";
			cout << "4: Выход в главное меню\n";
			cout << "Ввод: ";
			cin >> key;

			switch (key)
			{
			case '1':
			{
				Ball.setData();
				break;
			}
			case '2':
			{
				Ball.squareSurface();
				break;
			}
			case '3':
			{
				Ball.squareVolume();
				break;
			}
			case '4':
			{
				system("cls");
				break;
			}
			}
			break;
		}
		case '3':
		{
			print(Par);
			break;
		}
		case '4':
		{
			print(Ball);
			break;
		}
		default:
		{
			break;
		}
		}
	}
	return 0;
}

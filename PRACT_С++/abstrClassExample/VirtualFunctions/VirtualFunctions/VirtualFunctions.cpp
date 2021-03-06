#include "stdafx.h"
#include "ClassFunctions.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char key = ' ';

	Array arrArr;
	BitString bitArr;
	Decimal decArr;
	Array *p;
	while (key != '5')
	{
		cout << "Выберите класс для работы\n";
		cout << "1: Класс Array\n";
		cout << "2: Класс BitString\n";
		cout << "3: Класс Decimal\n";
		cout << "4: Очистить экран\n";
		cout << "5: Выход\n";
		cout << "Ввод: ";
		cin >> key;

		switch (key)
		{
		case '1':
		{
			cout << endl;
			cout << "Вы работаете с классом Array\n";
			cout << "1: Ввод массива\n";
			cout << "2: Вывод массива\n";
			cout << "3: Вывод элемента массива\n";
			cout << "Ввод: ";
			cin >> key;

			switch (key)
			{
			case '1':
			{
				p = &arrArr;
				p->enterArray();
				cout << endl;
				break;
			}
			case '2':
			{
				p = &arrArr;
				cout << "Массив класса Array: ";
				p->showArray();
				system("pause");
				cout << endl;
				break;
			}
			case '3':
			{
				int index;
				cout << "Введите индекс: ";
				cin >> index;
				cout << "Элемент [" << index << "]: " << arrArr[index];
				cout << endl << endl;
				break;
			}
			}
			break;
		}
		case '2':
		{
			cout << endl;
			cout << "Вы работаете с классом BitString\n";
			cout << "1: Ввод массива\n";
			cout << "2: Вывод массива\n";
			cout << "3: Вывод элемента массива\n";
			cout << "4: Сложение двух строк\n";
			cout << "Ввод: ";
			cin >> key;

			switch (key)
			{
			case '1':
			{
				try
				{
					p = &bitArr;
					p->enterArray();
					cout << endl;
					break;
				}
				catch (type_Error)
				{
					cerr << "Ошибка: Введено некорректное значение." << endl << endl;
					system("pause");
					break;
				}
			}
			case '2':
			{
					p = &bitArr;
					cout << "Массив класса BitString: ";
					p->showArray();
					cout << endl;
					system("pause");
					break;
			}
			case '3':
			{
				int index;
				cout << "Введите индекс: ";
				cin >> index;
				cout << "Элемент [" << index << "]: " << bitArr[index];
				cout << endl << endl;
				break;
			}
			case '4':
			{
				BitString bit2Arr;
				BitString bit3Arr;

				p = &bit2Arr;
				p->enterArray();
				p = &bit3Arr;
				p->enterArray();
				cout << endl;

				try
				{
					cout << bit2Arr.arrayPlus(bit3Arr) << endl << endl;
				}
				catch (len_Error)
				{
					cerr << "Ошибка: Различные длины строк." << endl << endl;
					system("pause");
					break;
				}
				break;
			}
			}
			break;
		}
		case '3':
		{
			cout << endl;
			cout << "Вы работаете с классом Decimal\n";
			cout << "1: Ввод массива\n";
			cout << "2: Вывод массива\n";
			cout << "3: Вывод элемента массива\n";
			cout << "4: Сложение двух строк\n";
			cout << "Ввод: ";
			cin >> key;
			
			switch (key)
			{
			case '1':
			{
				try
				{
					p = &decArr;
					p->enterArray();
					cout << endl;
					break;
				}
				catch (type_Error)
				{
					cerr << "Ошибка: Неверные данные" << endl << endl;
					system("pause");
					break;
				}
				catch (len_Error)
				{
					cerr << "Ошибка: Слишком большой размер массива" << endl << endl;
					system("pause");
					break;
				}
			}
			case '2':
			{
				p = &decArr;
				cout << "Массив класса Decimal: ";
				p->showArray();
				cout << endl;
				break;
			}
			case '3':
			{
				int index;
				cout << "Введите индекс: ";
				cin >> index;
				cout << "Элемент [" << index << "]: " << decArr[index];
				cout << endl << endl;
				break;
			}
			case '4':
			{
				Decimal dec2Arr;
				Decimal dec3Arr;

				p = &dec2Arr;
				p->enterArray();
				p = &dec3Arr;
				p->enterArray();
				cout << endl;

				dec2Arr.arrayPlus(dec3Arr);
				system("pause");
				break;
			}
			}
			break;
		}
		case '4':
		{
			system("cls");
			break;
		}
		default:
			break;
		}
	}
    return 0;
}


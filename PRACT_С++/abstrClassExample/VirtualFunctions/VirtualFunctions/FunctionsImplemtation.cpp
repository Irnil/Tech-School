#include "stdafx.h"
#include "ClassFunctions.h"
#include <string>
#include <string.h>
#include <iostream>
#include <array>

using namespace std;

Array::Array() {}

unsigned char Array::operator[](int j)
{
	return arr[j];
}

void Array::enterArray() 
{
	string str;
	cout << "Введите массив: ";
	cin >> str;
	size = str.size();
	for (int i = 0; i < size; i++)
		arr[i] = str.at(i);
}

void Array::showArray()
{
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
			cout << arr[i];
		cout << endl;
	}
	else
		cout << "Ошибка: Массив пуст" << endl;
}

void Array::arrayPlus() {}

BitString::BitString() {}

int BitString::SizeOfBit()
{
	return size;
}

void BitString::enterArray()
{
	string str;
	cout << "Введите массив: ";
	cin >> str;
	size = str.size();
	for (int i = 0; i < size; i++)
		if (str.at(i) != '0' && str.at(i) != '1')
			throw type_Error();
	for (int i = 0; i < size; i++)
		arr[i] = str.at(i);
}

void BitString::showArray() {}

unsigned char BitString::operator[](int j) 
{
	return arr[j];
}

string BitString::arrayPlus(BitString B) 
{
	string str;

	if (SizeOfBit() == B.SizeOfBit())
		for (int i = 0; i < size; i++)
		{
			if ((arr[i] == '0' && B.arr[i] == '1') || (arr[i] == '1' && B.arr[i] == '0'))
				str += "1";
			else
				str += arr[i];
		}
	else
		throw len_Error();
	cout << "Результат сложения строк: ";
	return str;
}

Decimal::Decimal() {}

void Decimal::enterArray() 
{
	string str;
	cout << "Введите массив: ";
	cin >> str;
	size = str.size();
	if (size < maxSize)
	{
		for (int i = 0; i < size; i++)
		{
			if (str.at(i) >= '0' && str.at(i) <= '9')
				continue;
			else
			{
				size = 0;
				throw type_Error();
			}
		}
		for (int i = 0; i < size; i++)
			arr[i] = str.at(i);
	}
	else
	{
		size = 0;
		throw len_Error();
	}
}

void Decimal::showArray() {}

void Decimal::arrayPlus(Decimal &D)
{
	string fArr = "", sArr = "";
	array<unsigned char, maxSize> result;
	int mod = 0, length, sum, fInt, sInt, dif;

	length = (size < D.size) ? D.size : size;

	//Копируем массив в строки
	for (int i = 0; i < length; i++)
	{
		fArr += arr[i];
		sArr += D.arr[i];
	}

	//Уравниваем строки до одинаковой длины
	if (size > D.size)
	{
		dif = size - D.size;
		for (int i = 0; i < dif; i++)
			sArr = "0" + sArr;
	}
	else
	{ 
		dif = D.size - size;
		for (int i = 0; i < dif; i++)
			fArr = "0" + fArr;
	}

	//Складываем числа
	for (int i = length; i > 0; i--)
	{
		fInt = fArr.at(i- 1) - 48;
		sInt = sArr.at(i - 1) - 48;
		sum = fInt + sInt + mod;
		if (sum >= 10)
		{
			mod = 1;
			sum -= 10;
		}
		else
			mod = 0;
		result[i] = sum + 48;
	}

	if (mod == 1)
	{
		result[0] = '1';
		for (int i = 0; i <= length; i++)
			cout << result[i];
	}
	else
	{
		result[0] = '0';
		for (int i = 1; i <= length; i++)
			cout << result[i];
	}
	cout << endl;
}
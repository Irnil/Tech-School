#include "stdafx.h"
#include <iostream>
#include "Abstract_Header.h"

using namespace std;

Parallelepiped::Parallelepiped(double a, double b, double c)
{
	side_a = a;
	side_b = b;
	side_c = c;
}

void Parallelepiped::setData()
{
	cout << "Введите длину, ширину и высоту параллелепипеда: ";
	cin >> side_a >> side_b >> side_c;
	if (!cin || ((side_a <= 0.0) || (side_b <= 0.0) || (side_c <= 0.0)))
	{
		cerr << "Ошибка ввода" << endl << endl;
		cin.clear();
		side_a = side_b = side_c = 0.0;
		while (cin.get() != '\n');
	}
	else
		cout << "Данные успешно введены" << endl << endl;
}

void Parallelepiped::getData()
{
	if (side_a == 0.0 && side_b == 0.0 && side_c == 0.0)
	{
		cerr << "Нет данных о фигуре" << endl << endl;
	}
	else
	{
		cout << "Данные о параллелепипеде\n";
		cout << "Длина: " << side_a << "\n";
		cout << "Ширина: " << side_b << "\n";
		cout << "Высота: " << side_c << "\n";
		cout << "Площадь поверхности: ";
		if (sqSurf > 0.0)
			cout << sqSurf << "\n";
		else
			cout << "Данные еще не вычеслены\n";
		cout << "Объем: ";
		if (sqVol > 0.0)
			cout << sqVol << "\n";
		else
			cout << "Данные еще не вычеслены\n";
		cout << endl << endl;
	}
}


void Parallelepiped::squareSurface()
{
	sqSurf = 2.0 * (side_a * side_b + side_b * side_c + side_a * side_c);
	cout << "Вычисление прошло успешно\n";
	cout << "Ответ: " << sqSurf << endl << endl;
}

void Parallelepiped::squareVolume()
{
	sqVol = side_a * side_b * side_c;
	cout << "Вычисление прошло успешно\n";
	cout << "Ответ: " << sqVol << endl << endl;
}

Ball::Ball(double R)
{
	Radius = R;
}

void Ball::setData() 
{
	cout << "Введите радиус шара: ";
	cin >> Radius;
	if (!cin || Radius <= 0.0)
	{
		cerr << "Ошибка ввода" << endl << endl;
		cin.clear();
		Radius = 0.0;
		while (cin.get() != '\n');
	}
	else
		cout << "Данные успешно введены" << endl << endl;
}

void Ball::getData()
{
	if (Radius != 0.0)
	{
		cout << "Данные о шаре\n";
		cout << "Радиус: ";
		cout << Radius << "\n";
		cout << "Площадь поверхности: ";
		if (sqSurf > 0.0)
			cout << sqSurf << "\n";
		else
			cout << "Данные еще не вычеслены\n";
		cout << "Объем: ";
		if (sqVol > 0.0)
			cout << sqVol << "\n";
		else
			cout << "Данные еще не вычеслены\n";
		cout << endl << endl;
	}
	else
		cerr << "Нет данных о фигуре" << endl << endl;
}

void Ball::squareSurface()
{
	sqSurf = 4.0 * Pi * Radius * Radius;
	cout << "Вычисление прошло успешно\n";
	cout << "Ответ: " << sqSurf << endl << endl;
}

void Ball::squareVolume()
{
	sqVol = 4.0 / 3.0 * Pi * Radius * Radius * Radius;
	cout << "Вычисление прошло успешно\n";
	cout << "Ответ: " << sqVol << endl << endl;
}

void print(Body &D)
{
	D.getData();
}
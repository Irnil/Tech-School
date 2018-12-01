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
	cout << "������� �����, ������ � ������ ���������������: ";
	cin >> side_a >> side_b >> side_c;
	if (!cin || ((side_a <= 0.0) || (side_b <= 0.0) || (side_c <= 0.0)))
	{
		cerr << "������ �����" << endl << endl;
		cin.clear();
		side_a = side_b = side_c = 0.0;
		while (cin.get() != '\n');
	}
	else
		cout << "������ ������� �������" << endl << endl;
}

void Parallelepiped::getData()
{
	if (side_a == 0.0 && side_b == 0.0 && side_c == 0.0)
	{
		cerr << "��� ������ � ������" << endl << endl;
	}
	else
	{
		cout << "������ � ���������������\n";
		cout << "�����: " << side_a << "\n";
		cout << "������: " << side_b << "\n";
		cout << "������: " << side_c << "\n";
		cout << "������� �����������: ";
		if (sqSurf > 0.0)
			cout << sqSurf << "\n";
		else
			cout << "������ ��� �� ���������\n";
		cout << "�����: ";
		if (sqVol > 0.0)
			cout << sqVol << "\n";
		else
			cout << "������ ��� �� ���������\n";
		cout << endl << endl;
	}
}


void Parallelepiped::squareSurface()
{
	sqSurf = 2.0 * (side_a * side_b + side_b * side_c + side_a * side_c);
	cout << "���������� ������ �������\n";
	cout << "�����: " << sqSurf << endl << endl;
}

void Parallelepiped::squareVolume()
{
	sqVol = side_a * side_b * side_c;
	cout << "���������� ������ �������\n";
	cout << "�����: " << sqVol << endl << endl;
}

Ball::Ball(double R)
{
	Radius = R;
}

void Ball::setData() 
{
	cout << "������� ������ ����: ";
	cin >> Radius;
	if (!cin || Radius <= 0.0)
	{
		cerr << "������ �����" << endl << endl;
		cin.clear();
		Radius = 0.0;
		while (cin.get() != '\n');
	}
	else
		cout << "������ ������� �������" << endl << endl;
}

void Ball::getData()
{
	if (Radius != 0.0)
	{
		cout << "������ � ����\n";
		cout << "������: ";
		cout << Radius << "\n";
		cout << "������� �����������: ";
		if (sqSurf > 0.0)
			cout << sqSurf << "\n";
		else
			cout << "������ ��� �� ���������\n";
		cout << "�����: ";
		if (sqVol > 0.0)
			cout << sqVol << "\n";
		else
			cout << "������ ��� �� ���������\n";
		cout << endl << endl;
	}
	else
		cerr << "��� ������ � ������" << endl << endl;
}

void Ball::squareSurface()
{
	sqSurf = 4.0 * Pi * Radius * Radius;
	cout << "���������� ������ �������\n";
	cout << "�����: " << sqSurf << endl << endl;
}

void Ball::squareVolume()
{
	sqVol = 4.0 / 3.0 * Pi * Radius * Radius * Radius;
	cout << "���������� ������ �������\n";
	cout << "�����: " << sqVol << endl << endl;
}

void print(Body &D)
{
	D.getData();
}
#include "stdafx.h"
#include "Pair.h"
#include <sstream>

namespace ab
{

	Money::Money()
	{
		ruble = 0;
		copek = 0;
	}

	void Money::Divide()
	{
		if (user_enter.length() == 1)
		{
			copek = toInt(user_enter);
			return;
		}
		if (user_enter.length() == 2)
		{
			copek = toInt(user_enter);
			return;
		}
		string temp_str;
		temp_str += user_enter[user_enter.length() - 2];
		temp_str += user_enter[user_enter.length() - 1];
		copek = toInt(temp_str);	//Кидаем последние два числа как две копейки
		temp_str.clear();
		for (int i = 0; i < user_enter.length() - 2; i++)
			temp_str += user_enter[i];		//заталкиваем во временное хранилище рубли
		ruble = toInt(temp_str);			//преобразуем в рубли
		temp_str.clear();					//очищаем массив
		user_enter.clear();					//очищаем массив
	}

	void Money::Read()
	{
		cout << "Enter value: ";
		while (user_enter == "")
		{
			getline(cin, user_enter);
			cin.clear();
		}
		Divide();
	}

	void Money::Display(string message)
	{
		message == "" ?
			cout << ruble << '.' << copek << endl :
			cout << message;
	}

	void Money::Plus(int T, int K)
	{
		ruble += T;
		copek += K;
		ruble += (int)(copek / 100);
		copek = copek % 100;
	}

	void Money::Minus(int T, int K)
	{
		ruble -= T;
		copek -= K;
		if (copek < 0)
		{
			ruble -= 1;
			copek = 100 - (copek * (-1));
		}
	}

	int Money::vRuble()
	{
		return ruble;
	}

	int Money::vCopek()
	{
		return copek;
	}


	Fractal::Fractal()
	{
		whole = 0;
		fract = 0;
	}

	void Fractal::Read()
	{
		cout << "Enter fract: ";
		while (user_enter == "")
		{
			getline(cin, user_enter);
			cin.clear();
		}
		whole = atoi(user_enter.c_str());
		user_enter = "";
		cout << "Enter whole: ";
		while (user_enter == "")
		{
			getline(cin, user_enter);
			cin.clear();
		}
		fract = toInt(user_enter);
	}

	void Fractal::Display(string message)
	{
		message == "" ?
			cout << whole << '.' << fract << endl :
			cout << message;
	}

	void Fractal::Plus(int T, int K)
	{
		whole += T;
		fract += K;
	}

	void Fractal::Minus(int T, int K)
	{
		whole -= T;
		fract -= K;
		if (fract < 0)
		{
			whole -= 1;
			fract *= (-1);
		}
	}

	int Fractal::vWhole() 
	{
		return whole;
	}

	int Fractal::vFract()
	{
		return fract;
	}


	string toString(int T)
	{
		std::ostringstream K;
		K << T;
		return K.str();
	}

	int toInt(string T)
	{
		return atoi(T.c_str());
	}

}
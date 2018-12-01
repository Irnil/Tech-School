#pragma once
#pragma warning(disable:4996)


#include <iostream>
#include <string>

namespace ab
{
	using namespace std;

	class Pair
	{
	public:
		Pair() {};

	protected:
		virtual void Read() = 0;
		virtual void Display(string = "") = 0;
		virtual void Plus(int, int) = 0;
		virtual void Minus(int, int) = 0;
	};




	class Money : public Pair
	{
	private:
		int ruble;
		int copek;
		string user_enter;

		void Divide();

	public:
		Money();
		void Read();
		void Display(string = "");
		void Plus(int, int);
		void Minus(int, int);

		int vRuble();
		int vCopek();

		bool depend;
	};

	class Fractal : public Pair
	{
	private :
		int whole;
		int fract;
		string user_enter;

	public:
		Fractal();
		void Read();
		void Display(string = "");
		void Plus(int, int);
		void Minus(int, int);

		int vFract();
		int vWhole();
	};

	string toString(int);
	int toInt(string);
}
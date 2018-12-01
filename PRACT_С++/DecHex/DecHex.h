#pragma once
#pragma warning(disable: 4996)

#include <iostream>
#include <sstream>
#include <string>

namespace ab
{

#define I_STR( x ) static_cast< std::ostringstream & >( ( std::ostringstream() << std::dec << x ) ).str()

	class Array
	{
	public:
		unsigned char *_Dec;
		unsigned char *_Hex;
	protected:
		virtual void Print(std::string = "") = 0;
		virtual void Read() = 0;
		static const int Max_length_of_string = 99;
	};

	class Dec;
	class Hex;


	class Dec : public Array
	{
	public:
		Dec();
		void HexPlus(Hex&);
		void DecPlus(Dec&);
		void Print(std::string = "");
		void Read();

	private:
		bool isDec(char);
	};


	class Hex : public Array
	{
	public:
		Hex();
		void HexPlus(Hex&);
		void DecPlus(Dec&);
		void Print(std::string = "");
		void Read();

	private:
		bool isHex(char);
	};


	void AddZero(unsigned char *&, int, bool = false);
	unsigned char * DecToHex(int);
	char* HexToDec(char *);
	char IntToHex(int);
	char IntToDec(int);
	int HexToInt(char);
	int DecToInt(char);

}
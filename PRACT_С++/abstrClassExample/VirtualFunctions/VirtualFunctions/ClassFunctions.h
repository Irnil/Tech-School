#pragma once
#include <string>
#include <array>

class Array 
{
protected:
	static const unsigned int maxSize = 100;
	std::array<unsigned char, maxSize> arr;
	int size = 0;

public:
	Array();
	unsigned char operator[](int);
	virtual void enterArray();
	virtual void arrayPlus();
	void showArray();
};

class BitString : public Array 
{
public:
	BitString();
	unsigned char operator[](int);
	void enterArray();
	void showArray();
	int SizeOfBit();
	std::string arrayPlus(BitString B);
};

class Decimal : public Array
{
public:
	Decimal();
	void enterArray();
	void showArray();
	void arrayPlus(Decimal &D);
};

class len_Error {};
class type_Error {};
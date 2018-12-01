#include "stdafx.h"
#include "DecHex.h"

namespace ab
{

	Dec::Dec()
	{
		_Dec = new unsigned char[1];
		_Dec[0] = '\0';
	}

	void Dec::HexPlus(Hex& T)
	{
		char *t_K = HexToDec((char *)T._Hex);
		unsigned char *K = new unsigned char[strlen(t_K) + 1];
		for (int i = 0; i < strlen(t_K); i++)
			K[i] = t_K[i];
		K[strlen(t_K)] = 0;

		if (strlen((char*)_Dec) > strlen((char*)K))
		{
			AddZero((unsigned char*)K, strlen((char*)_Dec) - strlen((char*)K), false);
		}
		if (strlen((char*)_Dec) < strlen((char*)K))
		{
			AddZero(_Dec, strlen((char*)K) - strlen((char*)_Dec), false);
		}

		int cLen = Max_length_of_string;
		int aLen, bLen = aLen = strlen((char*)_Dec);
		unsigned char Result[Max_length_of_string];
		memset(Result, '0', cLen);

		int i, j, _buf = 0;
		for (i = 0; aLen - i - 1 >= 0 && bLen - i - 1 >= 0; i++)
		{
			int tmp = DecToInt((char)_Dec[aLen - i - 1]) + DecToInt((char)K[bLen - i - 1]) + _buf;
			if (tmp > 9)
			{
				_buf = 1;
				Result[cLen - i - 1] = IntToHex(tmp - 10);
			}
			else
			{
				_buf = 0;
				Result[cLen - i - 1] = IntToHex(tmp);
			}
			if (aLen - i - 1 == 0)
				if (_buf > 0) { Result[cLen - i - 2] = IntToDec(1); }
		}
		_Dec = new unsigned char[i + 1];
		for (j = 0; j < i; j++)
			_Dec[j] = Result[cLen - i + j];
		_Dec[i] = '\0';
		Result[j] = '\0';
		Print();
	}

	void Dec::DecPlus(Dec& T)
	{
		if (strlen((char*)_Dec) > strlen((char*)T._Dec))
		{
			AddZero(T._Dec, strlen((char*)_Dec) - strlen((char*)T._Dec), false);
		}
		if (strlen((char*)_Dec) < strlen((char*)T._Dec))
		{
			AddZero(_Dec, strlen((char*)T._Dec) - strlen((char*)_Dec), false);
		}

		int cLen = Max_length_of_string;
		int aLen, bLen = aLen = strlen((char*)_Dec);
		unsigned char Result[Max_length_of_string];
		memset(Result, '0', cLen);

		int i, j, _buf = 0;
		for (i = 0; aLen - i - 1 >= 0 && bLen - i - 1 >= 0; i++)
		{
			int tmp = DecToInt((char)_Dec[aLen - i - 1]) + DecToInt((char)T._Dec[bLen - i - 1]) + _buf;
			if (tmp > 9)
			{
				_buf = 1;
				Result[cLen - i - 1] = IntToHex(tmp - 10);
			}
			else
			{
				_buf = 0;
				Result[cLen - i - 1] = IntToHex(tmp);
			}
			if (aLen - i - 1 == 0)
				if (_buf > 0) { Result[cLen - i - 2] = IntToDec(1); }
		}
		_Dec = new unsigned char[i + 1];
		for (j = 0; j < i; j++)
			_Dec[j] = Result[cLen - i + j];
		_Dec[i] = '\0';
		Result[j] = '\0';
		Print();
	}

	void Dec::Print(std::string mes)
	{
		mes != "" ? std::cout << mes : std::cout << _Dec << std::endl;
	}

	void Dec::Read()
	{
		Print("Enter value in DEC: ");
		std::cin >> _Dec;
		for (int i = 0; i < strlen((char*)_Dec); i++)
		{
			if (!isDec((char)_Dec[i]))
			{
				Print("Value not HEX\n");
				_Dec = new unsigned char[1];
				_Dec[0] = '\0';
				return;
			}
		}
	}

	bool Dec::isDec(char T)
	{
		if (HexToInt(T) > -1)
			return true;
		return false;
	}



	Hex::Hex()
	{
		_Hex = new unsigned char[1];
		_Hex[0] = '\0';
	}

	void Hex::HexPlus(Hex& T)
	{
		if (strlen((char*)_Hex) > strlen((char*)T._Hex))
		{
			AddZero(T._Hex, strlen((char*)_Hex) - strlen((char*)T._Hex), false);
		}
		if (strlen((char*)_Hex) < strlen((char*)T._Hex))
		{
			AddZero(_Hex, strlen((char*)T._Hex) - strlen((char*)_Hex), false);
		}

		int cLen = Max_length_of_string;
		int aLen, bLen = aLen = strlen((char*)_Hex);
		unsigned char Result[Max_length_of_string];
		memset(Result, '0', cLen);

		int i, j, _buf = 0;
		for (i = 0; aLen - i - 1 >= 0 && bLen - i - 1 >= 0; i++)
		{
			int tmp = HexToInt((char)_Hex[aLen - i - 1]) + HexToInt((char)T._Hex[bLen - i - 1]) + _buf;
			if (tmp > 15)
			{
				_buf = 1;
				Result[cLen - i - 1] = IntToHex(tmp - 16);
			}
			else
			{
				_buf = 0;
				Result[cLen - i - 1] = IntToHex(tmp);
			}
			if (aLen - i - 1 == 0)
				if (_buf > 0) { Result[cLen - i - 2] = IntToHex(1); }
		}
		_Hex = new unsigned char[i + 1];
		for (j = 0; j < i; j++)
			_Hex[j] = Result[cLen - i + j];
		_Hex[i] = '\0';
		Result[j] = '\0';
		Print();
	}

	void Hex::DecPlus(Dec& T)
	{
		unsigned char *Tkey = DecToHex(atoi((char *)T._Dec));

		if (strlen((char*)_Hex) > strlen((char*)Tkey))
		{
			AddZero(Tkey, strlen((char*)_Hex) - strlen((char*)Tkey), false);
		}
		if (strlen((char*)_Hex) < strlen((char*)Tkey))
		{
			AddZero(_Hex, strlen((char*)Tkey) - strlen((char*)_Hex), false);
		}

		int cLen = Max_length_of_string;
		int aLen, bLen = aLen = strlen((char*)_Hex);
		unsigned char Result[Max_length_of_string];
		memset(Result, '0', cLen);
		//Result[cLen-1] = '\0';

		int i, j, _buf = 0;
		for (i = 0; aLen - i - 1 >= 0 && bLen - i - 1 >= 0; i++)
		{
			int tmp = HexToInt((char)_Hex[aLen - i - 1]) + HexToInt((char)Tkey[bLen - i - 1]) + _buf;
			if (tmp > 15)
			{
				_buf = 1;
				Result[cLen - i - 1] = IntToHex(tmp - 16);
			}
			else
			{
				_buf = 0;
				Result[cLen - i - 1] = IntToHex(tmp);
			}
			if (aLen - i - 1 == 0)
				if (_buf > 0) { Result[cLen - i - 2] = IntToHex(1); }
		}
		_Hex = new unsigned char[i + 1];
		for (j = 0; j < i; j++)
			_Hex[j] = Result[cLen - i + j];
		_Hex[i] = '\0';
		Result[j] = '\0';
		Print();
	}

	void Hex::Print(std::string mes)
	{
		mes != "" ? std::cout << mes : std::cout << _Hex << std::endl;
	}

	void Hex::Read()
	{
		Print("Enter value in HEX: ");
		std::cin >> _Hex;
		for (int i = 0; i < strlen((char*)_Hex); i++)
		{
			if (!isHex((char)_Hex[i]))
			{
				Print("Value not HEX\n");
				_Hex = new unsigned char[1];
				_Hex[0] = '\0';
				return;
			}
		}
	}

	bool Hex::isHex(char T)
	{
		if (HexToInt(T) > -1)
			return true;
		return false;
	}


	int HexToInt(char TKey)
	{
		switch (TKey)
		{
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case 'a': return 10;
		case 'b': return 11;
		case 'c': return 12;
		case 'd': return 13;
		case 'e': return 14;
		case 'f': return 15;
		case 'A': return 10;
		case 'B': return 11;
		case 'C': return 12;
		case 'D': return 13;
		case 'E': return 14;
		case 'F': return 15;
		default: return -1;
		}

	}

	int DecToInt(char TKey)
	{
		switch (TKey)
		{
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return -1;
		}

	}

	char IntToHex(int TKey)
	{
		switch (TKey)
		{
		case 0: return '0';
		case 1: return '1';
		case 2: return '2';
		case 3: return '3';
		case 4: return '4';
		case 5: return '5';
		case 6: return '6';
		case 7: return '7';
		case 8: return '8';
		case 9: return '9';
		case 10: return 'a';
		case 11: return 'b';
		case 12: return 'c';
		case 13: return 'd';
		case 14: return 'e';
		case 15: return 'f';
		default: return '0';
		}

	}

	char IntToDec(int TKey)
	{
		switch (TKey)
		{
		case 0: return '0';
		case 1: return '1';
		case 2: return '2';
		case 3: return '3';
		case 4: return '4';
		case 5: return '5';
		case 6: return '6';
		case 7: return '7';
		case 8: return '8';
		case 9: return '9';
		default: return '0';
		}

	}

	char *HexToDec(char *c)
	{
		int x = c[0] - 48;
		if (x>9) x -= 39;
		int f;
		for (f = 1; f < 5; f++)
		{
			switch (c[f])
			{
			case '1': { x = x * 16 + 1; break; }
			case '2': { x = x * 16 + 2; break; }
			case '3': { x = x * 16 + 3; break; }
			case '4': { x = x * 16 + 4; break; }
			case '5': { x = x * 16 + 5; break; }
			case '6': { x = x * 16 + 6; break; }
			case '7': { x = x * 16 + 7; break; }
			case '8': {  x = x * 16 + 8; break; }
			case '9': { x = x * 16 + 9; break; }
			case 'a': { x = x * 16 + 10; break; }
			case 'b': { x = x * 16 + 11; break; }
			case 'c': { x = x * 16 + 12; break; }
			case 'd': {  x = x * 16 + 13; break; }
			case 'e': {  x = x * 16 + 14; break; }
			case 'f': { x = x * 16 + 15; break; }
			}
		}

		return itoa(x, c, 10);
	}

	unsigned char *DecToHex(int dec)
	{
		int hex = dec;
		std::string hexStr = "";

		while (dec > 0)
		{
			hex = dec % 16;

			if (hex < 10)
				hexStr = hexStr.insert(0, std::string(1, (hex + 48)));
			else
				hexStr = hexStr.insert(0, std::string(1, (hex + 55)));

			dec /= 16;
		}
		unsigned char *K = new unsigned char[hexStr.length() + 1];
		for (int i = 0; i < hexStr.length(); i++)
			K[i] = hexStr[i];
		K[hexStr.length()] = 0;

		return K;
	}

	void AddZero(unsigned char *&T, int K, bool b_)
	{
		std::string _TKey;
		std::string _buf = (char*)T;
		if (!b_) { for (K; K>0; --K) { _TKey += "0"; } _TKey += _buf; }
		else { _TKey += _buf; for (K; K>0; --K) { _TKey += "0"; } }
		T = 0;
		T = new unsigned char[_TKey.length() + K];
		std::copy(_TKey.begin(), _TKey.end(), T);
		T[_TKey.length()] = 0;
	}

}


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

//------------------------------------CLASS_DEFINE----------------------------------------------------------------------------------------------------

class Triad;

class Triad{
	private:
		int tri1, tri2, tri3;
		
	public:
		void Enter();
		void Show();
		void Compare();	//сравнение
		void Change();
		void Sum();
	
};

class Time;

class Time{
	private:
		int hour, min, sec;
	public:
		void Check(Triad&); //проверка на соответсвие при портировании класса Triad в Time т.к. часов 24, минут 60, секунд 60
		void Add();
		void Show();
		void Compare();
};


//----------------------------------CLASS_TRIAD_METHODS_REALIZE--------------------------------------------------------------------------------------

void Triad :: Enter(){
	
}

void Triad :: Show(){
	
}

void Triad :: Compare(){
	
}

void Triad :: Change(){
	
}

void Triad :: Sum(){
	
}

//----------------------------------CLASS_TIME_METHODS_REALIZE---------------------------------------------------------------------------------------


//----------------------------------FREE_FUNCTIONS---------------------------------------------------------------------------------------------------

std::string toString(int valInt)
{
	std::ostringstream putStr;
	putStr << valInt;
	return putStr.str();
}

void Read(string U, int &T){
			
	while (true){
		
		cout << U << "";
		cin >> T;
		
		if (cin.peek() == '\n'){
			cin.get();
			break;
		}
		else{
			cout << "Wrong input! Try again." << endl;
			cout<<""<<endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}
}

//------------------------------------MAIN_BLOCK-----------------------------------------------------------------------------------------------------

int main(){
	
}


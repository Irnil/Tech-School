#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sstream>

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
		
		if (cin.peek() == '\n' and T>0){
			cin.get();
			break;
			system("cls");
		}
		else{
			system("cls");
			cout << "Wrong! Value must be a number and >0!" << endl;
			cout<<""<<endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}
}


//----------------------------------CLASS_TRIAD_METHODS_REALIZE--------------------------------------------------------------------------------------

void Triad :: Enter(){
	Read("Enter first number: ", tri1);
	Read("Enter second number: ", tri2);
	Read("Enter third number: ", tri3);
	system("cls");
}

void Triad :: Show(){
	cout<<tri1<<" | "<<tri2<<" | "<<tri3<<endl;
}

void Triad :: Compare(){
	
}

void Triad :: Change(){
	
}

void Triad :: Sum(){
	
}

//----------------------------------CLASS_TIME_METHODS_REALIZE---------------------------------------------------------------------------------------

void Time :: Check(Triad&){
	
}

void Time :: Add(){
	
}

void Time :: Show(){
	
}

void Time :: Compare(){
	
}


//------------------------------------MAIN_BLOCK-----------------------------------------------------------------------------------------------------

int main(){
	int key;
	Triad GO;
	
	GO.Enter();
	
for( ; ; ){

	cout<<""<<endl;
	cout<<"Select action:"<<endl;
	cout<<"1. Show triad"<<endl;
	cout<<"7. Exit programm"<<endl;
	
	while(true){

				cin>>key;
				cout<<""<<endl;
		
				if(cin.peek()=='\n'){
					cin.get();
					break;
				}
				else{
					cout<<"Wrong input! Select a correct action."<<endl;
					cin.clear();	
				while(cin.get()!='\n'){}
				}
			}

	switch(key){
		case 1: GO.Show(); break; 
		case 7: exit(1);
		default:cout<<"Wrong! Select a correct action."<<endl; break;}
	}
	
}


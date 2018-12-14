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
		int tri1 = 0, tri2 = 0, tri3 = 0;
		
	public:
		bool avCheck(); //проверка на доступность: если триада равна нулю, то не была введена => функции сравнения и вывода будут недоступны
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

bool Triad :: avCheck(){
	if(tri1 == 0 and tri2 == 0 and tri3 == 0){
		return 0;
	}
	else return 1;
}

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

	int key;
	
	for( ; ; ){
		cout<<""<<endl;
		cout<<"Select action:"<<endl;
		cout<<"1. Change first value"<<endl;
		cout<<"2. Change second value"<<endl;
		cout<<"3. Change third"<<endl;
		cout<<"4. Exit changes"<<endl;
		
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

			case 1: Read("Enter first number: ", tri1);break;
			case 2: Read("Enter second number: ", tri2); break;
			case 3: Read("Enter third number: ", tri3); break;
			case 4: Show();
					exit(1);
					
			default:cout<<"Wrong! Select a correct avtion."<<endl; break;
		}
	}
	
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
	
	int key1, key2;
	bool on1, on2;
	Triad one, two; 
	
	for( ; ; ){
	
		cout<<""<<endl;
		cout<<"Select action:"<<endl;
		cout<<"1. Enter triads"<<endl;
		cout<<"2. Show triads"<<endl;
		cout<<"3. Change triads"<<endl;
		cout<<"7. Exit programm"<<endl;
		
		while(true){
	
					cin>>key1;
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
	
		switch(key1){
			case 1: cout<<"Please enter first triad: "<<endl;
					one.Enter(); 
					cout<<"Please enter second triad: "<<endl;
					two.Enter();
					break; 
					
			case 2: on1 = one.avCheck();
					on2 - two.avCheck();
					
					if(on1 == false and on2 == false){
						cout<<"Values are empty!"<<endl;
						break;
					}
					
					else{						
						cout<<"First triad: "<<endl;
						one.Show(); 
						cout<<"Second triad: "<<endl;
						two.Show();
						break;
					}
					
			case 3: do{
				
						on1 = one.avCheck();
						on2 - two.avCheck();
						if(on1 == false and on2 == false){
							cout<<"Values are empty!"<<endl;
							break;
						}
						else{
						
							cout<<""<<endl;
							cout<<"Select triad to change: "<<endl;
							cout<<"1. First triad"<<endl;
							cout<<"2. Second triad"<<endl;
							cout<<"3. Exit changes"<<endl;
							
							while(true){
		
								cin>>key2;
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
							
							if(key2 == 1){
							
								cout<<"Please enter first triad: "<<endl;
										one.Enter(); 
										continue;
							}
							
							if(key2 == 2){
							
								cout<<"Please enter second triad: "<<endl;
										two.Enter();
										continue; 
							}
							
						}
						
					}while(key2 != 3);
					break;
			
			case 7: exit(1);
			
			default:cout<<"Wrong! Select a correct action."<<endl; break;
		}
	}
	
}


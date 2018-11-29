#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sstream>


using namespace std;

//------------------------------------CLASS_DEFINE----------------------------------------------------------------------------------------------------
class Goods;

class Goods{
	private:
		int id, idCount, price, count, sum;
		string name;
	
	public:
		Goods();
		unsigned char *_Goods;
		unsigned char operator[](int);
		void Enter();
		void Change();
		void Show();
		void Sum();
			
};

class Recipe{
		
	private:
		int id, timeHour, timeMin;
		string date;
		Goods item;
		
	public:
		
		void Add();
		void Change();
		void Delete(Goods&);
		void Find(Goods&);
		void Total(Goods&);	
	
	protected:
		static const int size = 99;	
};

//----------------------------------CLASS_GOODS_METHODS_REALIZE---------------------------------------------------------------------------------------------------

Goods :: Goods()
	{
		_Goods = new unsigned char[1];
		_Goods[0] = '\0';
	}

unsigned char Goods :: operator[](int id) {
		return _Goods[id];
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
		
void Goods :: Enter(){   //<<<<<<<<<<<<<<make input with id index
	id = idCount + 1;
	cout<<"Enter NAME: "<<endl;
	cin>>name;
	Read("Enter PRICE: ", price);
	Read("Enter COUNT: ", count);
	idCount++;
	cout<<""<<endl;
}	
		
void Goods :: Sum(){
	sum = count * price;
}
		
void Goods :: Show(){
	cout<<"| ID: "<<id<<" | NAME: "<<name<<" | PRICE: "<<price<<" | COUNT: "<<count<<" | SUM: "<<sum<<" |"<<endl;
}
		
void Goods :: Change(){
	
	int key;
	
	for( ; ; ){
		cout<<""<<endl;
		cout<<"Select action:"<<endl;
		cout<<"1. Change NAME"<<endl;
		cout<<"2. Change PRICE"<<endl;
		cout<<"3. Change COUNT"<<endl;
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

			case 1: cout<<"Enter NAME: "<<endl;
					cin>>name; break;
			case 2: Read("Enter PRICE: ", price); break;
			case 3: Read("Enter COUNT: ", count); break;
			case 4: sum = count * price; 
					Show();
					exit(1);
			default:cout<<"Wrong! Select a correct avtion."<<endl; break;
		}
	}
}

//------------------------------------CLASS_RECIPE_METHOD_REALIZE---------------------------------------------------------------------------
std::string toString(int valInt)
{
	std::ostringstream putStr;
	putStr << valInt;
	return putStr.str();
}

void Recipe :: Add(){
	
	char key;
	string tmpHour, tmpMin;
	
	cout<<"Enter adding TIME:"<<endl;
	
	while(true){
		
		cout<<"HOUR: "<<endl;
		cin>>timeHour;
		
		if(cin.peek() == '\n' and timeHour >= 0 and timeHour < 25){
			cin.get();
			
			if(timeHour >= 0 and timeHour < 10){
				tmpHour = "0" + toString(timeHour);
			}
			else if(timeHour == 24){
				tmpHour = "00";
			}
			else{
				tmpHour = toString(timeHour);
			}
			
			break;
		}
		else{
			cout<<"Value must be a number and >= 0!"<<endl;
			cin.clear();	
		while(cin.get() != '\n'){}
		}
	}
	
	while(true){
		
		cout<<"MIN: "<<endl;
		cin>>timeMin;
			
		if(cin.peek()=='\n' and timeMin >= 0 and timeMin < 60){
			cin.get();
			
			if(timeMin >= 0 and timeMin < 10){
				tmpMin = "0" + toString(timeMin);
			}
			else{
				tmpMin = toString(timeMin);
			}
			
			break;
		}
		else{
			cout<<"Value must be a number and >= 0!"<<endl;
			cin.clear();	
		while(cin.get()!='\n'){}
		}
	}
	date = tmpHour + ":" + tmpMin; 
	item.Enter();
	cout<<"|DATE: "<<date<<item[id]<<endl;
	cin>>key;
}

void Recipe :: Change(){
	item.Change();
}

void Recipe :: Delete(Goods&){
}

void Recipe :: Find(Goods&){
}

void Recipe :: Total(Goods&){
	int total;
	
}

//------------------------------------MAIN_BLOCK--------------------------------------------------------------------------------------------

int main(){

//-----CLASS_RECIPE_DEBUG-------

//Recipe GO;
//
//GO.Add();
//GO.Change();


//-----CLASS_GOODS_DEBUG--------

	Goods GO;
	
	
	GO.Enter();
	GO.Sum();
	GO.Show();
	GO.Change();
	GO.Show();
	system("pause");
}

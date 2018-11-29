#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

//------------------------------------CLASS_DEFINE----------------------------------------------------------------------------------------------------
class Goods;

class Goods{
	private:
		int id, price, count, sum;
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
		int id, time_hour, time_min;
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
	cout<<"Enter NAME: "<<endl;
	cin>>name;
	Read("Enter PRICE: ", price);
	Read("Enter COUNT: ", count);
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

char IntToTime_hour(int TKey){
	switch (TKey){
		case 0: return '00';
		case 1: return '01';
		case 2: return '02';
		case 3: return '03';
		case 4: return '04';
		case 5: return '05';
		case 6: return '06';
		case 7: return '07';
		case 8: return '08';
		case 9: return '09';
		case 10: return '10';
		case 11: return '11';
		case 12: return '12';
		case 13: return '13';
		case 14: return '14';
		case 15: return '15';
		case 16: return '16';
		case 17: return '17';
		case 18: return '18';
		case 19: return '19';
		case 20: return '20';
		case 21: return '21';
		case 22: return '22';
		case 23: return '23';
		case 24: return '24';
		default: return '0';
	}
}

char IntToTime_min(int TKey){
	switch (TKey){
		case 0: return '00';
		case 1: return '01';
		case 2: return '02';
		case 3: return '03';
		case 4: return '04';
		case 5: return '05';
		case 6: return '06';
		case 7: return '07';
		case 8: return '08';
		case 9: return '09';
		case 10: return '10';
		case 11: return '11';
		case 12: return '12';
		case 13: return '13';
		case 14: return '14';
		case 15: return '15';
		case 16: return '16';
		case 17: return '17';
		case 18: return '18';
		case 19: return '19';
		case 20: return '20';
		case 21: return '21';
		case 22: return '22';
		case 23: return '23';
		case 24: return '24';
		case 25: return '25';
		case 26: return '26';
		case 27: return '27';
		case 28: return '28';
		case 29: return '29';
		case 30: return '30';
		case 31: return '31';
		case 32: return '32';
		case 33: return '33';
		case 34: return '34';
		case 35: return '35';
		case 36: return '36';
		case 37: return '37';
		case 38: return '38';
		case 39: return '39';
		case 40: return '40';
		case 41: return '41';
		case 42: return '42';
		case 43: return '43';
		case 44: return '44';
		case 45: return '45';
		case 46: return '46';
		case 47: return '47';
		case 48: return '48';
		case 49: return '49';
		case 50: return '50';
		case 51: return '51';
		case 52: return '52';
		case 53: return '53';
		case 54: return '54';
		case 55: return '55';
		case 56: return '56';
		case 57: return '57';
		case 58: return '58';
		case 59: return '59';
		default: return '0';
	}
}

void Recipe :: Add(){
	
	char key;
	
	cout<<"Enter adding TIME:"<<endl;
	
	while(true){
		
		cout<<"HOUR: "<<endl;
		cin>>time_hour;
		
		if(cin.peek()=='\n' and time_hour>=0 and time_hour<25){
			cin.get();
			IntToTime_hour(time_hour);
			break;
		}
		else{
			cout<<"Value must be a number and >0!"<<endl;
			cin.clear();	
		while(cin.get()!='\n'){}
		}
	}
	
	while(true){
		
		cout<<"MIN: "<<endl;
		cin>>time_min;
			
		if(cin.peek()=='\n' and time_min>=0 and time_min<60){
			cin.get();
			IntToTime_min(time_min);
			break;
		}
		else{
			cout<<"Value must be a number and >0!"<<endl;
			cin.clear();	
		while(cin.get()!='\n'){}
		}
	}
	date = time_hour + ":" + time_min; 
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

//	Goods GO;
//	
//	GO.Enter();
//	GO.Sum();
//	GO.Show();
//	GO.Change();
//	GO.Show();
//	system("pause");
}

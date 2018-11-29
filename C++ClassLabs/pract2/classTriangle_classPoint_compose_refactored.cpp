#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

class Point{

	public:
		
		float x, y;
		
		void Read(string U, float &T){
			
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
		
		void Enter(){
			Read("Enter X: ", x);
			Read("Enter Y: ", y);
			cout<<""<<endl;
		}	
			
};

class Triangle{		
		
	public:
		
		float AB=0, BC=0, AC=0, P=0, S=0, halfP=0;
		Point a,b,c;
		
		void PointIn(){

			cout<< "Enter A(x,y):"<<endl;
			a.Enter();
			cout<< "Enter B(x,y):"<<endl;
			b.Enter();
			cout<< "Enter C(x,y):"<<endl;
			c.Enter();
			cout<<"A("<<a.x<<","<<a.y<<"); B("<<b.x<<","<<b.y<<"); C("<<c.x<<","<<c.y<<")"<<endl;
			cout<<""<<endl;
		
		}
			
		void Dist(){

			AB = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
			cout << "Side AB length = " << AB << endl;
			
			BC = sqrt((c.x - b.x)*(c.x - b.x) + (c.y - b.y)*(c.y - b.y));
			cout << "Side BC length = " << BC << endl;
			
			AC = sqrt((c.x - a.x)*(c.x - a.x) + (c.y - a.y)*(c.y - a.y));
			cout << "Side AC length = " << AC << endl;

			cout<<""<<endl;
		}
		
		void countP(){
				P = AB + BC + AC;
				cout<<"P(ABC) = "<<P<<endl;
				cout<<""<<endl;
		}

		
		void countS(){
			halfP = P / 2;
			S = sqrt(halfP * (halfP - AB) * (halfP - BC) * (halfP - AC));
			cout<<"S(ABC)= "<<S<<endl;
			cout<<""<<endl;
		}
};

int main(){
	
	char k='0';
	Triangle tri;
	
	tri.PointIn();
	tri.Dist();
	cout<<"";
	
	while (k != '4')
	{
		cout << "1. Change cordinates" << endl;
		cout << "2. Find P(a,b,c) " << endl;
		cout << "3. Find S(a,b,c) " << endl;
		cout << "4. Exit" << endl;

		cin >> k;
		switch (k) 
		{
			case '1': 
				system("cls");
				tri.PointIn();
				tri.Dist();
				break;
				
			case '2':
				system("cls");
				tri.countP();
				cout<<"";
				break;
				
			case '3':
				system("cls");
				tri.countS();
				cout<<"";
				break;
								
			case '4':
				k='4';
				break;
	
			default:
				system("cls");
				break;
		}
	}
    return 0;
}

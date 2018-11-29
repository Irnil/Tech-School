#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct fuzzyNum{
	private:
		int A=0,a1=0,a2=0,B=0,b1=0,b2=0;
	
	public:
		
		getNum(){   //read method
			
			cout<<"Programm for work with Fuzzy numbers. Look like: A = (A - a1, A, A + a2)"<<endl;
			cout<<"All values must be a numbers. Also a1,b2,b1,b2 must be >0."<<endl;
			
			while(true){  //input checks
				
				cout<<""<<endl;
				cout<<"Please enter A= ";
				cin>>A;
		
				if(cin.peek()=='\n'){
					cin.get();
					break;
				}
				else{
					cout<<"Value must be a number!"<<endl;
					cin.clear();	
				while(cin.get()!='\n'){}
				}
			}
			
			while(true){
		
				cout<<"Please enter a1= ";
				cin>>a1;
		
				if(cin.peek()=='\n' and a1>0){
					cin.get();
					break;
				}
				else{
					cout<<"Value must be a number and >0!"<<endl;
					cin.clear();	
				while(cin.get()!='\n'){}
				}
			}
			
			while(true){
		
				cout<<"Please enter a2= ";
				cin>>a2;
		
				if(cin.peek()=='\n' and a2>0){
					cin.get();
					break;
				}
				else{
					cout<<"Value must be a number and >0!"<<endl;
					cin.clear();	
				while(cin.get()!='\n'){}
				}
			}
			
			while(true){
		
				cout<<"Please enter B= ";
				cin>>B;
		
				if(cin.peek()=='\n'){
					cin.get();
					break;
				}
				else{
					cout<<"Value must be a number!"<<endl;
					cin.clear();	
				while(cin.get()!='\n'){}
				}
			}
			
			while(true){
		
				cout<<"Please enter b1= ";
				cin>>b1;
		
				if(cin.peek()=='\n' and b1>0){
					cin.get();
					break;
				}
				else{
					cout<<"Value must be a number and >0!"<<endl;
					cin.clear();	
				while(cin.get()!='\n'){}
				}
			}
			
			while(true){
		
				cout<<"Please enter b2= ";
				cin>>b2;
		
				if(cin.peek()=='\n' and b2>0){
					cin.get();
					break;
				}
				else{
					cout<<"Value must be a number and >0!"<<endl;
					cin.clear();	
				while(cin.get()!='\n'){}
				}
			}
				cout<<""<<endl;
				cout<<"A = ("<<A<<"-"<<a1<<", "<<A<<", "<<A<<"+"<<a2<<")"<<endl;
				cout<<"B = ("<<B<<"-"<<b1<<", "<<B<<", "<<B<<"+"<<b2<<")"<<endl;
				cout<<""<<endl;
		}
		
		
		plus(){
			int sumAB, suma1b1, suma2b2;
			
				sumAB = A + B;
				suma1b1 = a1 - b1;
				suma2b2 = a2 + b2;
				
				cout<<"A + B = ("<<sumAB<<"-"<<suma1b1<<", "<<sumAB<<", "<<sumAB<<"+"<<suma2b2<<")"<<endl;
		}
		
		minus(){
			int minAB, mina1b1, mina2b2;
			
			minAB = A - B;
			mina1b1 = a1 - b1;
			mina2b2 = a2 + b2;
			
			cout<<"A - B = ("<<minAB<<"-"<<mina1b1<<", "<<minAB<<", "<<minAB<<"+"<<mina2b2<<")"<<endl;
			
		}
		
		multi(){
			int mulAB, mulBa1, mulAb1, mula1b1;
			
			mulAB = A * B;
			mulBa1 = B * a1;
			mulAb1 = A * b1;
			mula1b1 = a1 * b1;
			
			cout<<"A * B = ("<<mulAB - mulBa1<<" - "<<mulAb1 + mula1b1<<", "<<mulAB<<", "<<mulAB + mulBa1<<" + "<<mulAb1 + mula1b1<<")"<<endl;
		}
		
		div(){
			int divAB, divAa1, divBb2, divAa2, divBb1;
			
			if(B <= 0){
				cout<<"Can not be solved with B<0. No solution!"<<endl;
			}
			else{
				divAB = A / B;
				divAa1 = A - a1;
				divBb2 = B + b2;
				divAa2 = A + a2;
				divBb1 = B - b1;
				
				cout<<"A / B = (("<<divAa1<<" / "<<divBb2<<"), "<<divAB<<", ("<<divAa2<<" / "<<divBb1<<"))"<<endl;
			}
		}
		
		inv(){
			int invAa1, invAa2, invA;
			
			if(A <= 0){
				cout<<"Can not be solved with A<0. No solution!"<<endl;
			}
			
			else{
			
				//invA = 1 / A;
				invAa1 = A - a1;
				invAa2 = A + a2;
				
				cout<<"Inversed A= (1 / "<<invAa2<<", 1 / "<<A<<", 1 / "<<invAa1<<")"<<endl;
			}
		}
};

int main() {
	
	int key;
	fuzzyNum GO;
	
	GO.getNum();
	
for( ; ; ){
	cout<<""<<endl;
	cout<<"Select action:"<<endl;
	cout<<"1. Change values"<<endl;
	cout<<"2. Plus"<<endl;
	cout<<"3. Minus"<<endl;
	cout<<"4. Multiple"<<endl;
	cout<<"5. Divide"<<endl;
	cout<<"6. Inversion"<<endl;
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
		case 1: GO.getNum(); break; 
		case 2: GO.plus(); break;
		case 3: GO.minus();; break;
		case 4: GO.multi(); break;
		case 5: GO.div(); break;
		case 6: GO.inv(); break;
		case 7: exit(1);
		default:cout<<"Wrong! Select a correct avtion."<<endl; break;}
	}

}	

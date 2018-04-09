#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class car
{
	private:
		string color;
		string make;
		string model;
		int year;
		int speed=0;
		
	public:
	
		void getColor(){
			cout<< "Please selct a color: " << endl;
			cin>> color;
		}
		void getMake(){
			cout << "Please select a make: " << endl;
			cin>> make;
		}
		void getModel(){
			cout << "Please select a model: " << endl;
			cin>> model;
		}
		void getYear(){
			cout << "Please select a year: " << endl;
			cin>> year;
		}
		
		void print(){
			cout << year << color << make << model <<" is traviling at " << speed << "mph"<< endl;
		}
};



int main(){
	
	
	int c,m,o,y,s,S,p;
	
	car car;
	cout <<"Select an action: "<< endl;
	cout <<"set color(c) "<< endl;
	cout <<"set make(m) "<< endl;
	cout <<"set model(o) "<< endl;
	cout <<"set year(y) "<< endl;
	cout <<"start car(s) "<< endl;
	cout <<"stop car(S) "<< endl;
	cout << "print(p) "<<endl;
	
	car.getColor();
	car.getMake();
	car.getModel();
	car.getYear();
	car.print();
	
	
	
	return 0;
}

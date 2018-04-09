#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class car
{
	private:
		int color;
		int make;
		int model;
		int year;
		int speed=0;
		
	public:
	
		void set(int c, int m, int o, int y){
			color = c;
			make=m;
			model=o;
			year=y;
		}
		
		void print(){
			cout << year << color << make << model <<" is traviling at " << speed << "mph"<< endl;
		}
};



int main(){
	
	char option;
	
	car userCar;
	cout <<"Select an action: "<< endl;
	cout <<"set color(c) "<< endl;
	cout <<"set make(m) "<< endl;
	cout <<"set model(o) "<< endl;
	cout <<"set year(y) "<< endl;
	cout <<"start car(s) "<< endl;
	cout <<"stop car(S) "<< endl;
	cout << "print(p) "<<endl;
	
	cin>> option;
	
	void set();
	
	
	return 0;
}

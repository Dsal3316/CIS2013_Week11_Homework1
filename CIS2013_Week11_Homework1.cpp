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
		string year;
		int speed=0;
		
	public:
	
		string getColor(){
			return color;
		}
		string getMake(){
			return make;
		}
		string getModel(){
			return model;
		}
		string getYear(){
			return year;
		}
		
		void print(){
			cout << year << color << make << model <<" is traviling at " << speed << "mph"<< endl;
		}
};



int main(){
	
	char option;
	int c,m,o,y,s,S,p;
	
	car userCar;
	cout <<"Select an action: "<< endl;
	cout <<"set color(c) "<< endl;
	cout <<"set make(m) "<< endl;
	cout <<"set model(o) "<< endl;
	cout <<"set year(y) "<< endl;
	cout <<"start car(s) "<< endl;
	cout <<"stop car(S) "<< endl;
	cout << "print(p) "<<endl;
	
	cin >> option;
	
	if option==c{
		getColor;
	}
	else if option==m{
		getMake;
	}
	else if option==o{
		getModel;
	}
	else if option==y{
		getYear;
	}
	else if option==p{
		print;
	}
	
	
	return 0;
}

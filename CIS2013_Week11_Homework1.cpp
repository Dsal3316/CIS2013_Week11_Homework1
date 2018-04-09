#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class car
{
	public:
	int color;
	int make;
	int model;
	int year;
	int speed=0;
};



int main(){
	
	cout <<"Select an action: "<< endl;
	cout <<"set make(m) "<< endl;
	cout <<"set model(o) "<< endl;
	cout <<"set year(y) "<< endl;
	cout <<"start car(s) "<< endl;
	cout <<"stop car(S) "<< endl;
	cout << "print(p) "<<endl;
	
	
	
	return 0;
}

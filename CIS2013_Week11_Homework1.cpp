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
			cout << year<< " " << color<< " " << make<< " " << model <<" is traviling at " << speed << "mph"<< endl;
		}
		void start(){
			if (speed==0){
				cout<< "     Please turn key in ignition to start car (s) " << endl;
			}
			else {
				cout<<"      You are traveling at " << speed << " MPH" << endl;
			}
		}
		void accellerate(){
			if(speed==0){
				cout <<"     Please turn key in ignition to start car (s) " << endl;
			}
			else if (speed >= 100){
				cout <<"     Car is at max speed engine damage iminit if pushed harder" << endl;
			}
		}
		void brake(){
			if (speed >0){
				speed-5;
				cout <<"     The car slows to " << speed << " MPH " << endl;
			}
			else {
				cout<<"       The car has come to a stop please start back up to continue driving (s)" << endl;
			}
		}
		void turnLeft(){
			if (speed==0){
				cout<<"       Thats funny cars have to be moving forward to turn, Please start (s)" << endl;
			}
			else if (speed>25){
				cout<< "      You are going too fast to make a turn please slow down (S) " << endl;
			}
			else{
				for(int i=speed; i >=15; i-=5)
					speed=i;
				cout<<"       Turning left" << endl;
				cout<<"       Your current speed is now " << speed << " MPH " << endl;
			}
		}
		void turnRight(){
			if (speed==0){
				cout<<"       Thats funny cars have to be moving forward to turn, Please start (s)" << endl;
			}
			else if (speed>25){
				cout<< "      You are going too fast to make a turn please slow down (S) " << endl;
			}
			else{
				for(int i=speed; i >=15; i-=5)
					speed=i;
				cout<<"       Turning right" << endl;
				cout<<"       Your current speed is now " << speed << " MPH " << endl;
			}
		}	
		
};



int main(){
	
	
	int c,m,o,y,s,S,p,L,R;
	char action;
	
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
	car.accellerate();
	car.brake();
	car.turnLeft();
	car.turnRight();
	
	do{
		
		cout<<"Select an action: " << endl;
		cout <<"set color(c) "<< endl;
		cout <<"set make(m) "<< endl;
		cout <<"set model(o) "<< endl;
		cout <<"set year(y) "<< endl;
		cout<<"Start car (s): " << endl;
		cout<<"Stop car (S): " << endl;
		cout<<"Turn left (L): " << endl;
		cout<<"Turn right (R): " << endl;
		cin>> action;
		
		switch(action){
			case 'c':
			car.getColor();
			break;
			case 'm':
			car.getMake();
			break;
			case 'o':
			car.getModel();
			break;
			case 'y':
			car.getYear();
			break;
			case 's':
			car.accellerate();
			break;
			case 'S':
			car.brake();
			break;
			case 'L':
			car.turnLeft();
			break;
			case 'R':
			car.turnRight();
			break;
			default :
			cout<<" Invalid entry " << endl;
		}
	}
			
	while(1);		
		
	
	
	
	return 0;
}
